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


#define BIN_UNIT_LEN			5	//每个BIN的边长
#define ROUND_TIME_CONST		0.1	//每轮计算的时间常数，此处为0.1s，即： 设定每轮运算时间控制在0.1s



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


//通过这些参数可以计算出总偏移，即写文件时候用到的index以及value
class tile_map{

	public:
		int nx;
		int ny;
		int tile_width;
		int tile_height;
		int bin_width;
		int bin_height;
		int tile_id;
		int bin_id_begin;//这个会被处理
		int bin_id_end;//这个也会被处理
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