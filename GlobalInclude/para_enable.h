#pragma once
#ifndef PARA_RENDER
#define PARA_RENDER 

#include "../GlobalInclude/camera.h"
#include "../GlobalInclude/hitable.h"
#include "../GlobalInclude/hitableList.h"
#include "../GlobalInclude/material.h"
#include "../GlobalInclude/textures.h"
#include "../GlobalInclude/random.h"
#include "../GlobalInclude/sphere.h"

#include "scene.h"

#include <string>

#include <iostream>
#include <fstream>
#include <random>
#include <sys/time.h>  


#include "../GlobalInclude/Chapter/diffuse_light.h"
#include "../GlobalInclude/Chapter/Perlin.h"


#define BIN_UNIT_LEN			5	//ÿ��BIN�ı߳�
#define ROUND_TIME_CONST		0.1	//ÿ�ּ����ʱ�䳣�����˴�Ϊ0.1s������ �趨ÿ������ʱ�������0.1s



class value_map{
	public:
	int index;
	int value;
};

class value_map_vec3{
	public:
	int index;
	float R_value;
	float G_value;
	float B_value;
};


//ͨ����Щ�������Լ������ƫ�ƣ���д�ļ�ʱ���õ���index�Լ�value
class tile_map{

	public:
		int nx;
		int ny;
		int tile_width;
		int tile_height;
		int bin_width;
		int bin_height;
		int tile_id;
		int bin_id_begin;//����ᱻ����
		int bin_id_end;//���Ҳ�ᱻ����
		int ray_nums_per_pixel;
};

class renderLog{
	public:
		double time_cost;
		int tile_id;
		int round;
};



void Image_tile_partition_Init(int* width, int* height, int processer_num);

void tile_process(tile_map tile_info, value_map_vec3 current_round_arr[], hitable* world, camera cam);
void unprocessed_bin_collection(int p_size, int tile_size, int current_bin_id_in_arr[], value_map outputList[], int outputList_len);


#endif