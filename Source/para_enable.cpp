#include "../GlobalInclude/para_enable.h"


using namespace std;

//ע����Ӧ����һ���������ұ�Ľṹ��
//�������Ӧ������������
void tile_process(tile_map tile_info, value_map_vec3 current_round_arr[], hitable* world, camera cam)
{

	int tile_num_row = tile_info.nx/tile_info.tile_width;//�������ݼ�һ���ж��ٸ�tile
	int tile_num_col = tile_info.ny/tile_info.tile_height;//һ���ж��ٸ�tile���������֮��û�õ���
	int bin_num_row = tile_info.tile_width/tile_info.bin_width;//ÿ��tileһ���ж��ٸ�bin
	int bin_num_col = tile_info.tile_height/tile_info.bin_height;//һ���ж��ٸ�bin���������֮��Ҳû�õ���

	int local_arr_len = (tile_info.bin_id_end - tile_info.bin_id_begin + 1)*tile_info.bin_width*tile_info.bin_height;
	int count = 0;
	//cout<<"local_arr_len = "<<local_arr_len<<endl;
	for(int bin_id_temp = tile_info.bin_id_begin; bin_id_temp <= tile_info.bin_id_end; bin_id_temp++)
	{
		int local_tile_row = tile_info.tile_id/tile_num_row;//����������tile���������ݼ����ǵڼ���
		int local_tile_col = tile_info.tile_id%tile_num_row;//����������tile���������ݼ����ǵڼ���
		int local_bin_row = bin_id_temp/bin_num_row;//����������bin�ڵ�ǰ��tile���ǵڼ���
		int local_bin_col = bin_id_temp%bin_num_row;//����������bin�ڵ�ǰ��tile���ǵڼ���


		for(int row=0; row<tile_info.bin_height; row++)
		{
			for(int col=0; col<tile_info.bin_width; col++)
			{
				int global_row = local_tile_row*tile_info.tile_height+local_bin_row*tile_info.bin_height+row;
				int global_col = local_tile_col*tile_info.tile_width+local_bin_col*tile_info.bin_width+col;
				int global_index = global_row*tile_info.nx+global_col;

				int tile_local_row = local_bin_row*tile_info.bin_height+row;
				int tile_local_col = local_bin_col*tile_info.bin_width+col;
				int local_index = tile_local_row*tile_info.tile_width+tile_local_col;

				int j_global = global_index/tile_info.nx;
				int i_global = global_index%tile_info.nx;//�������ֱ�ӵȼ�Ϊ֮�ϵ� global_row �� global_col
				//����ֱ�Ӳ���������


				vec3 pixel_val(0, 0, 0);

				for (int s = 0; s < tile_info.ray_nums_per_pixel; ++s)
				{


					float u = float(i_global + rand() % 101 / float(101)) / float(tile_info.nx);
					float v = float(j_global + rand() % 101 / float(101)) / float(tile_info.ny);
					

					ray r = cam.get_ray(u, v);

					vec3 p = r.point_at_parameter(2.0);

					pixel_val += color(r, world, 0);

				}


				pixel_val /= float(tile_info.ray_nums_per_pixel);

				pixel_val = vec3(sqrt(pixel_val[0]), sqrt(pixel_val[1]), sqrt(pixel_val[2]));

				pixel_val = color_unit_normalization(pixel_val, 1);
				
				//cout<<pixel_val<<endl;

				int ir = int(255.99*pixel_val[0]);
				int ig = int(255.99*pixel_val[1]);
				int ib = int(255.99*pixel_val[2]);

				current_round_arr[count].index = global_index;
				current_round_arr[count].R_value = ir;
				current_round_arr[count].G_value = ig;
				current_round_arr[count].B_value = ib;
				
				count+=1;
				
			}
		}
	}
	
}






void unprocessed_bin_collection(int p_size, int tile_size, int current_bin_id_in_arr[], value_map outputList[], int outputList_len)
{
	
	cout<<"output_arr_len = "<<outputList_len<<endl;

	int outputList_counter = 0;
	for(int i=0;i<p_size;i++)
	{
		int last_temp = (i+1)*tile_size-current_bin_id_in_arr[i]-1;
		for(int j=0; j<last_temp; j++)
		{
			int unprocessed_tile_id = i;
			int unprocessed_bin_id = current_bin_id_in_arr[i]+j+1 - i*tile_size;
			outputList[outputList_counter].index = unprocessed_tile_id;//���� index ����δ����� tile_id
			outputList[outputList_counter].value = unprocessed_bin_id;//���� value ����δ����� bin_id
			outputList_counter++;
		}
	}

}


/*����ͨ��ͼ��ֱ��ʣ���С���񻮷ֵ�Ԫ���������������ʼ����Ԫ*/
void Image_tile_partition_Init(int* width, int* height, int processer_num)
{
	int unit_width = *width;
	int unit_height = *height;
	unit_width = unit_width/2;
	unit_height = unit_height/2;


	*width = unit_width;
	*height = unit_height;
}

