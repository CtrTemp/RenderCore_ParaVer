
//��ǰ.cpp�ļ�Ӧ�ú�GlobalInclude�ļ�����ͬһ��Ŀ¼��

#include <string>

#include <iostream>
#include <iomanip>
#include <fstream>
#include <random>
#include <sys/time.h>  



#include "GlobalInclude/scene.h"
#include "GlobalInclude/para_enable.h"

#include "mpi.h"

//�����ļ�������ϵ���ܽ᣺
/*
	���ڵ�ǰ�ļ����ڵ�Ŀ¼������ֱ��include����Ŀ¼�µ�����ͷ�ļ������۵�ǰ�ļ���ͷ�ļ�����Դ�ļ�
���ڵ�ǰ�ļ�����Ŀ¼�µ���Ҫ��Ŀ¼������������Ŀ¼�µ�ͷ�ļ�������������ǰĿ¼�ϼ�Ŀ¼�е��ļ�������Ҫ��
ʹ��../���������ϼ�Ŀ¼�������á�

	���⣬���������ļ�����ʹ�þ���·����ָ��λ�á�

	Ĭ������£�c_cpp_properties.json�ļ��Ὣ��Ŀ¼��������ǰ����һ��Ŀ¼�¡�

	֮����극�����̣�ʵ�������Ƿ������

*/




using namespace std;

/*Ver1.01:�汾���£� ���а汾1�� �����ɫЧ���� �������������Ĳ���*/
//�����Ӧ�� MPI �ڲ� color �࣬ ��Ϊ vec3 ���͵Ķ�Ӧ



int main(int argc, char* argv[])
{
	

	//���������ʼ������Ļ������ʼ������������

	int nx = 2000;
	int ny = 1000;
	int ns = 100;

	hitable *world = sample_light_RGB();


	vec3 lookfrom(17, 17, 17);
	vec3 lookat(8, 0, 0);
	float dist_to_focus = 10.0;
	float aperture = 0.0;
	float vfov = 40.0;
	camera cam(lookfrom, lookat, vec3(0, 1, 0), vfov, float(nx) / float(ny), aperture, dist_to_focus, 0.0, 1.0);






	//MPI������ʼ��
	int myid, size;
    double MPI_Start_Time , MPI_Finish_Time, MPI_Total_Time;
	int gather_root_id = 0;//����root����
    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &myid);
    MPI_Comm_size(MPI_COMM_WORLD, &size);
    MPI_Status status;
	


	//��ȡ���䵽ÿ�����̵� tile ���С
	int width_unit=nx,height_unit=ny;
	Image_tile_partition_Init(&width_unit, &height_unit ,4);

	

	
	//����ÿ�������е�tile����
	int bin_num_per_tile = width_unit*height_unit/BIN_UNIT_LEN/BIN_UNIT_LEN;




	//���� gather_V ��һЩ��ʼ��
	int* r_count;
    int* offset;
	r_count = new int[size];
	offset = new int[size];

	offset[0]=0;
	for(int i=0;i<size;i++)
	{
		r_count[i] = width_unit*height_unit;
		if(i!=0)
		{
			offset[i] = offset[i-1]+r_count[i-1];
		}
	}



	//���� value_map ���� MPI �д����������͵Ķ��塢��ʼ��
	value_map value_addr;
	MPI_Datatype new_mpi_class;
    MPI_Datatype type_list[2] = {MPI_INT, MPI_INT};
    int block_len_list[2] = {1,1};
    MPI_Aint off_set_list[2]; 

	MPI_Get_address(&value_addr.index,&off_set_list[0]);
    MPI_Get_address(&value_addr.value,&off_set_list[1]);


	off_set_list[1] = off_set_list[1] - off_set_list[0];
    off_set_list[0] = 0;

	MPI_Type_create_struct(2,block_len_list,off_set_list,type_list, &new_mpi_class);
    MPI_Type_commit(&new_mpi_class); 



	//���� renderLog ���� MPI �д����������͵Ķ��塢��ʼ��
	renderLog log_temp;
	MPI_Datatype mpi_renderLog_class;




    MPI_Datatype type_list_renderLog[3] = {MPI_DOUBLE, MPI_INT, MPI_INT};
    int block_len_list_renderLog[3] = {1, 1, 1};
    MPI_Aint off_set_list_renderLog[3]; 

	MPI_Get_address(&log_temp.time_cost,&off_set_list_renderLog[0]);
	MPI_Get_address(&log_temp.tile_id,&off_set_list_renderLog[1]);
	MPI_Get_address(&log_temp.round,&off_set_list_renderLog[2]);
	
	
	off_set_list_renderLog[2] = off_set_list_renderLog[2] - off_set_list_renderLog[0];
	off_set_list_renderLog[1] = off_set_list_renderLog[1] - off_set_list_renderLog[0];
    off_set_list_renderLog[0] = 0;

	MPI_Type_create_struct(3,block_len_list_renderLog,off_set_list_renderLog,type_list_renderLog, &mpi_renderLog_class);
    MPI_Type_commit(&mpi_renderLog_class); 


	//���� vec3 ���� MPI �д����������͵Ķ��塢��ʼ��
	value_map_vec3 vec_temp;
	MPI_Datatype mpi_vec3_class;




    MPI_Datatype type_list_vec3[4] = {MPI_INT, MPI_FLOAT, MPI_FLOAT, MPI_FLOAT};
    int block_len_list_vec3[4] = {1, 1, 1, 1};
    MPI_Aint off_set_list_vec3[4]; 

	MPI_Get_address(&vec_temp.index,&off_set_list_vec3[0]);
	MPI_Get_address(&vec_temp.R_value,&off_set_list_vec3[1]);
	MPI_Get_address(&vec_temp.G_value,&off_set_list_vec3[2]);
	MPI_Get_address(&vec_temp.B_value,&off_set_list_vec3[3]);
	
	off_set_list_vec3[3] = off_set_list_vec3[3] - off_set_list_vec3[0];
	off_set_list_vec3[2] = off_set_list_vec3[2] - off_set_list_vec3[0];
	off_set_list_vec3[1] = off_set_list_vec3[1] - off_set_list_vec3[0];
    off_set_list_vec3[0] = 0;

	MPI_Type_create_struct(4,block_len_list_vec3,off_set_list_vec3,type_list_vec3, &mpi_vec3_class);
    MPI_Type_commit(&mpi_vec3_class); 



	//������Ⱦ�����ռ����� ��ʼ��
	value_map_vec3* local_buf;
	value_map_vec3* gather_buf;
	local_buf = new value_map_vec3[height_unit*width_unit];
	if(myid==gather_root_id)
	{
		gather_buf = new value_map_vec3[ny*nx];
	}
	

	//��־��Ϣ�ռ����� ��ʼ��
	renderLog* local_render_time_log = new renderLog[bin_num_per_tile];
	renderLog* time_gather_buf;
	if(myid==gather_root_id)
	{
		time_gather_buf = new renderLog[bin_num_per_tile*size];
	}



















	cout<<width_unit<<"  "<<height_unit<<endl;















	//������ѭ��
	MPI_Barrier(MPI_COMM_WORLD);
	MPI_Start_Time = MPI_Wtime();

	int* current_round_r_count;
	int last_round_r_count_num = 0;
	int* current_round_offset;
	current_round_r_count = new int[size];
	current_round_offset = new int[size];
	for(int i=0; i<size; i++)
	{
		current_round_offset[i] = 0;
		current_round_r_count[i] = 0;
	}
	
	


	int round_counter = 0;
	int bin_id;
	int round_bin_num_para;
	
	
	
	
	
	
	cout<<"bin_num_per_tile = "<<bin_num_per_tile<<endl;
	
	
	
	
	
	
	double MPI_Start_Time_roundUnit , MPI_Finish_Time_roundUnit, MPI_Total_Time_roundUnit;


	int* bin_id_global_location;
	bin_id_global_location = new int[size];
	

	while(++round_counter)
	{
		
		if(round_counter == 1)//����ǵ�һ�֣�����һ����ʼֵ����ѭ��
		{
			bin_id = 0;
			round_bin_num_para = 10;
		}
		else{//�����ʱ����д�����̬����
			bin_id+=round_bin_num_para;//�����ϴ�ѭ���е� bin �����Ϊ���ο�ʼ��bin_id
			if(bin_id == bin_num_per_tile-1)//�����һ���Ѿ������һ��ѭ����
			{//��ô���β��������ڳ�������gatherһ����ֵ
				bin_id = bin_id;
				round_bin_num_para = 0;
			}
			else{//��̬���㱾��Ӧ�ô���� bin ����
				round_bin_num_para = round_bin_num_para*ROUND_TIME_CONST/MPI_Total_Time_roundUnit;
				if(bin_id+round_bin_num_para>=bin_num_per_tile-1)// ������������һ��ѭ��
				{
					round_bin_num_para = bin_num_per_tile-bin_id;
				}
			}	
			
		}
		

		
		int len_gather = round_bin_num_para*BIN_UNIT_LEN*BIN_UNIT_LEN;
		MPI_Barrier(MPI_COMM_WORLD);
		//MPI_Gather(&len_gather,1,MPI_INT,current_round_r_count,1,MPI_INT,gather_root_id,MPI_COMM_WORLD);
		MPI_Allgather(&len_gather,1,MPI_INT,current_round_r_count,1,MPI_INT,MPI_COMM_WORLD);//���н��̹�������
		
		//cout<<"current_bin_id = "<<bin_id<<endl;
		value_map_vec3* current_round_buf;
		//if(myid == gather_root_id)
		//���н��̶�Ҫִ�У�
		{
			if(current_round_offset[size-1]==0)
			{
				current_round_offset[0] = 0;
			}
			else{
				current_round_offset[0] = current_round_offset[size-1] + last_round_r_count_num;//��ǰ�ֵ���ƫ��Ϊ��һ�ֵ�ĩβƫ�� + ��һ�����һ��round��������
				
			}
			
			
			for(int i=1; i<size; i++)
			{
				current_round_offset[i] = current_round_offset[i-1] + current_round_r_count[i-1];
			}
			int break_temp = 1;//current_round_r_count[0]*current_round_r_count[1]*current_round_r_count[2]*current_round_r_count[3];
			for(int i=0;i<size;i++)
			{
				break_temp*=current_round_r_count[i];
			}

			if(!break_temp)//whileѭ���Ͽ��ж���䣡���� ����� ֻҪ������һ������ִ����ϣ� �ͽ�ֱ���˳��� �������������һ�׶Ρ�
			{
				break;
			}
			
		}
		last_round_r_count_num = current_round_r_count[size-1];
		

		//������Ϣ��ʼ��
		//��������Ҫ��Ӧ��ͬ���̷��ʲ�ͬ���ݿ飬 �ʴ���Ҫ����Ӧ�޸ģ� ��һ�������������жϣ�

		tile_map value;
		value.nx = nx;
		value.ny = ny;
		value.tile_width = width_unit;
		value.tile_height = height_unit;
		value.tile_id = myid;
		value.bin_width = BIN_UNIT_LEN;
		value.bin_height = BIN_UNIT_LEN;
		value.bin_id_begin = bin_id;
		value.bin_id_end = bin_id+round_bin_num_para-1;
		value.ray_nums_per_pixel = ns;
		
		

		int buf_len = (value.bin_id_end - value.bin_id_begin + 1)*value.bin_width*value.bin_height;
		current_round_buf = new value_map_vec3[buf_len];
		
		MPI_Start_Time_roundUnit = MPI_Wtime();

		tile_process(value,current_round_buf,world,cam);
		
		MPI_Finish_Time_roundUnit = MPI_Wtime();
		MPI_Total_Time_roundUnit = MPI_Finish_Time_roundUnit - MPI_Start_Time_roundUnit;
		MPI_Barrier(MPI_COMM_WORLD);
		
		MPI_Gatherv(current_round_buf,buf_len,mpi_vec3_class,gather_buf,current_round_r_count,current_round_offset,mpi_vec3_class,gather_root_id,MPI_COMM_WORLD);
		
		cout<<"offset print  ";
		for(int i=0;i<size;i++)
		{
			cout<<current_round_offset[i]<<" ";
		}cout<<endl;

		if(value.bin_id_end>=(bin_num_per_tile-1))//��ʾ���������Ѿ�ִ�����ˣ�������ת��
		{
			cout<<"this is process "<<myid<<" first to break"<<endl;
		}



		int global_location_bin = bin_num_per_tile*myid+bin_id+round_bin_num_para-1;
		MPI_Allgather(&global_location_bin,1,MPI_INT,bin_id_global_location,1,MPI_INT,MPI_COMM_WORLD);

		local_render_time_log[round_counter].tile_id = myid;
		local_render_time_log[round_counter].round = round_counter;
		local_render_time_log[round_counter].time_cost = MPI_Total_Time_roundUnit;
		

	}
	cout<<"//////////////////////////////////////////////this is process "<<myid<<" Done"<<endl;

	MPI_Barrier(MPI_COMM_WORLD);
	MPI_Gather(local_render_time_log,bin_num_per_tile,mpi_renderLog_class,time_gather_buf,bin_num_per_tile,mpi_renderLog_class,gather_root_id,MPI_COMM_WORLD);




	




	//����ڶ��׶�
	if(myid==gather_root_id)
	{
		for(int i=0;i<size;i++)
		{
			cout<<bin_id_global_location[i]<<"  ";
		}cout<<endl;
	}



	value_map* unprocessed_list;

	int output_arr_len = 0;
	for(int i=0; i<size; i++)
	{
		output_arr_len -= bin_id_global_location[i];
		output_arr_len += (bin_num_per_tile)*(i+1);
	}
	output_arr_len -= size;
	//cout<<"output_arr_len = "<<output_arr_len-4<<endl;
	unprocessed_list = new value_map[output_arr_len];

	unprocessed_bin_collection(size,bin_num_per_tile,bin_id_global_location,unprocessed_list,output_arr_len);



	if(myid==gather_root_id)
	{
		// for(int i=0; i<output_arr_len; i++)
		// {
		// 	cout<<"arr_temp["<<i<<"].tile_id = "<<unprocessed_list[i].index<<" , .bin_id = "<<unprocessed_list[i].value<<endl;
		// }

		// cout<<"current_round_offset = ";
		// for(int i=0;i<size;i++)
		// {//current_round_offset  current_round_r_count
		// 	cout<<current_round_offset[i]<<"  ";
		// }cout<<endl;
	}//���������
	
	for(int i=0;i<size;i++)
	{
		current_round_r_count[i] = BIN_UNIT_LEN*BIN_UNIT_LEN;
	}

	for(int i=0;i<output_arr_len/size;i++)
	{
		//cout<<"current index = "<<i*4+myid<<endl;
		int unprocessed_tile_id = unprocessed_list[i*size+myid].index;
		int unprocessed_bin_id = unprocessed_list[i*size+myid].value;
		value_map_vec3* unprocessed_current_buf;

		unprocessed_current_buf = new value_map_vec3[BIN_UNIT_LEN*BIN_UNIT_LEN];

		if(i!=0)
		{
			current_round_offset[0] = current_round_offset[size-1]+BIN_UNIT_LEN*BIN_UNIT_LEN;
		}

		for(int j=1;j<size;j++)
		{
			current_round_offset[j] = current_round_offset[j-1] + BIN_UNIT_LEN*BIN_UNIT_LEN;
		}

		if(myid == gather_root_id)
		{
			cout<<"current_round_offset : ";
			for(int j=0;j<size;j++)
			{
				cout<<current_round_offset[j]<<" ";
			}cout<<endl;
		}

		tile_map unprocessed_value;
		unprocessed_value.nx = nx;
		unprocessed_value.ny = ny;
		unprocessed_value.tile_width = width_unit;
		unprocessed_value.tile_height = height_unit;
		unprocessed_value.tile_id = unprocessed_tile_id;
		unprocessed_value.bin_width = BIN_UNIT_LEN;
		unprocessed_value.bin_height = BIN_UNIT_LEN;
		unprocessed_value.bin_id_begin = unprocessed_bin_id;
		unprocessed_value.bin_id_end = unprocessed_bin_id;
		unprocessed_value.ray_nums_per_pixel = ns;

		tile_process(unprocessed_value,unprocessed_current_buf,world,cam);

		MPI_Gatherv(unprocessed_current_buf,BIN_UNIT_LEN*BIN_UNIT_LEN,mpi_vec3_class,gather_buf,current_round_r_count,current_round_offset,mpi_vec3_class,gather_root_id,MPI_COMM_WORLD);
		MPI_Barrier(MPI_COMM_WORLD);
		
	}
	

	MPI_Finish_Time = MPI_Wtime();
	MPI_Total_Time = MPI_Finish_Time - MPI_Start_Time;
	MPI_Barrier(MPI_COMM_WORLD);
	//����ѭ��������ֹͣÿ�����̵ļ�ʱ��������ʱ
































	if(myid == gather_root_id)//�����̸���д ͼƬ�ļ� �Լ� ��־�ļ� 
	{
		
		vec3* value_temp;
		value_temp = new vec3[nx*ny];

		for(int i=0; i<nx*ny; i++)
		{
			value_temp[gather_buf[i].index][0] = gather_buf[i].R_value;
			value_temp[gather_buf[i].index][1] = gather_buf[i].G_value;
			value_temp[gather_buf[i].index][2] = gather_buf[i].B_value;
		}

		std::ofstream OutputImage;
		OutputImage.open("../Pic/MPI_Render_Garbage.ppm");
		OutputImage << "P3\n" << nx << " " << ny << "\n255\n";
		for(int i=nx*ny-1;i>=0;i--)
		{
			OutputImage << value_temp[i].e[0] << " " << value_temp[i].e[1] << " " << value_temp[i].e[2] << "\n";//�ɸ�����д�ļ�
			//cout<<"value 1 2 3 => "<<value_temp[i].e[0]<<" "<<value_temp[i].e[1]<<" "<<value_temp[i].e[2]<<endl;
		}


		//�����־�ļ�
		std::ofstream OutputLog;
		OutputLog.open("./log/Render_time_log_test.txt");
		OutputLog << "Log Time Record\n";
		OutputLog<<"\nTotal time cost = "<<MPI_Total_Time<<"s\n"<<endl;
		
		for(int i=0;i<size;i++)
		{
			OutputLog<<setw(15)<<left<<"p_id = "+to_string(i);
		}OutputLog<<endl<<endl;
		
		

		for(int i=0;i<round_counter;i++)
		{
			//OutputLog<<"this is tile "<<time_gather_buf[i].tile_id<<" , bin "<<time_gather_buf[i].bin_id<<"  round_time = "<<time_gather_buf[i].time_cost<<"\n";
			//��ms����ʽ����չ��
			
			for(int j=0;j<size;j++)
			{
				int temp = (int(10000*time_gather_buf[j*bin_num_per_tile+i].time_cost));
				OutputLog<<setw(15)<<to_string(temp/10)+"."+to_string(temp%10)+"ms"<<left;
			}OutputLog<<endl;

			
		}

	}
	
	MPI_Finalize();


	return 0;
}

















































