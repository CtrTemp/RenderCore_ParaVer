// //#include "GlobalInclude/ray.h"
// //#include "GlobalInclude/vec3.h"
// //��ǰ.cpp�ļ�Ӧ�ú�GlobalInclude�ļ�����ͬһ��Ŀ¼��
// /*
// #include "GlobalInclude/camera.h"
// #include "GlobalInclude/hitable.h"
// #include "GlobalInclude/hitableList.h"
// #include "GlobalInclude/material.h"
// #include "GlobalInclude/textures.h"
// #include "GlobalInclude/random.h"
// #include "GlobalInclude/sphere.h"

// #include <string>

// #include <iostream>
// #include <fstream>
// #include <random>
// #include <sys/time.h>  


// #include "GlobalInclude/Chapter/diffuse_light.h"
// #include "GlobalInclude/Chapter/Perlin.h"
// */

// #include "scene.h"
// #include "GlobalInclude/camera.h"
// //�����ļ�������ϵ���ܽ᣺
// /*
// 	���ڵ�ǰ�ļ����ڵ�Ŀ¼������ֱ��include����Ŀ¼�µ�����ͷ�ļ������۵�ǰ�ļ���ͷ�ļ�����Դ�ļ�
// ���ڵ�ǰ�ļ�����Ŀ¼�µ���Ҫ��Ŀ¼������������Ŀ¼�µ�ͷ�ļ�������������ǰĿ¼�ϼ�Ŀ¼�е��ļ�������Ҫ��
// ʹ��../���������ϼ�Ŀ¼�������á�

// 	���⣬���������ļ�����ʹ�þ���·����ָ��λ�á�

// 	Ĭ������£�c_cpp_properties.json�ļ��Ὣ��Ŀ¼��������ǰ����һ��Ŀ¼�¡�

// 	֮����극�������̣�ʵ�������Ƿ������

// */




// vec3 color(const ray& r, hitable *world, int depth)
// {

// 	hit_record rec;

// 	if (world->hit(r, 0.001, 999999, rec))//FLT_MAX
// 	{
// 		ray scattered;
// 		vec3 attenuation;
// 		vec3 emitted = rec.mat_ptr->emitted(rec.u, rec.v, rec.p);
// 		if (depth < 50 && rec.mat_ptr->scatter(r, rec, attenuation, scattered))
// 		{
// 			return emitted + attenuation*color(scattered, world, depth + 1);
// 		}
// 		else
// 		{
// 			return emitted;
// 		}
// 	}
// 	else
// 	{
// 		return vec3(0, 0, 0);
// 	}

// }


// vec3 lookfrom_gen(int index, float total)
// {

// 	//vec3 look_temp(-20,15,20);
// 	//if(index<10)
// 	//	return look_temp-vec3(0,0,index);
// 	//if(index<20)
// 	//	return look_temp+vec3(0,index-10,-10);
// 	//else
// 	//	return look_temp+vec3(index-20,10,-10);
	

// 	return vec3 (20*cos(2*M_PI*(float)index/total), 15+5*sin(4*M_PI*(float)index/total), 20*sin(2*M_PI*(float)index/total));

// } 






// int main(void)
// {
// 	int nx = 500;
// 	int ny = 250;
// 	int ns = 50;//Grace Jannik Remix

// 	int unit_percent = ny/100;


// 	struct timeval timeStart, timeEnd, timeSystemStart; 
//     double runTime=0, systemRunTime; 
//     gettimeofday(&timeSystemStart, NULL );
// 	//Linux�¼�ʱ��

// 	hitable *world = sample_light();


// 	//vec3 lookfrom(278, 278, -800);
// 	//vec3 lookat(278, 278, 0);
	


// 	for(int img_index=0; img_index<2; img_index++)
// 	{

// 		vec3 lookfrom = lookfrom_gen(img_index, 60);
			
			
// 		vec3 lookat(2, 2.5, -3);
// 		float dist_to_focus = 10.0;
// 		float aperture = 0.0;//MotionBlur
// 		float vfov = 40.0;
// 		camera cam(lookfrom, lookat, vec3(0, 1, 0), vfov, float(nx) / float(ny), aperture, dist_to_focus, 0.0, 1.0);


// 		std::ofstream OutputImage;
// 		std::string Path = "/home/ctrtemp/Desktop/"+std::to_string(img_index)+".ppm";
// 		OutputImage.open(Path);
// 		OutputImage << "P3\n" << nx << " " << ny << "\n255\n";


// 		std::cout << "iNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN" << std::endl;
		
		
// 		gettimeofday(&timeStart, NULL );
// 		//��ʼ��ʱ
		


// 		for (int j = ny - 1; j >= 0; --j)
// 		{
// 			for (int i = 0; i < nx; ++i)
// 			{
// 				vec3 col(0, 0, 0);
// 				for (int s = 0; s < ns; ++s)
// 				{


// 					float u = float(i + rand() % 101 / float(101)) / float(nx);
// 					float v = float(j + rand() % 101 / float(101)) / float(ny);


// 					ray r = cam.get_ray(u, v);

// 					vec3 p = r.point_at_parameter(2.0);

// 					col += color(r, world, 0);

// 				}


// 				col /= float(ns);

// 				col = vec3(sqrt(col[0]), sqrt(col[1]), sqrt(col[2]));

// 				col = color_unit_normalization(col, 1);//ɫֵ

// 				int ir = int(255.99*col[0]);
// 				int ig = int(255.99*col[1]);
// 				int ib = int(255.99*col[2]);

				
				

// 				OutputImage << ir << " " << ig << " " << ib << "\n";


// 			}
// 			//std::cout<<j%unit_percent<<std::endl;
// 			/*
// 			if(((ny-j)%unit_percent)==0)
// 			{
// 				int percentage = (ny-j)/unit_percent;
// 				gettimeofday( &timeEnd, NULL ); 
// 				//ֹͣ��ʱ
// 				runTime = (timeEnd.tv_sec - timeStart.tv_sec ) + (double)(timeEnd.tv_usec -timeStart.tv_usec)/1000000; 
				
			
// 				std::cout<<"Image Processing"<<percentage<<"% : "<< runTime << "second cost from now on" << std::endl;
// 			}
// 			*/
// 		}

// 		gettimeofday( &timeEnd, NULL ); 
// 		//ֹͣ��ʱ
// 		runTime = (timeEnd.tv_sec - timeStart.tv_sec ) + (double)(timeEnd.tv_usec -timeStart.tv_usec)/1000000; 
// 		std::cout<<"Number"<<img_index<<": The total time of the pirmary loop is: " << runTime << "s" << std::endl;

// 	}

// 	std::cout<<"ALL DONE"<<std::endl;
// 	return 0;
// }
