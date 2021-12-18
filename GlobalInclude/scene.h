#pragma once
#ifndef SCENE
#define SCENE 

#include "../GlobalInclude/camera.h"
#include "../GlobalInclude/hitable.h"
#include "../GlobalInclude/hitableList.h"
#include "../GlobalInclude/material.h"
#include "../GlobalInclude/textures.h"
#include "../GlobalInclude/random.h"
#include "../GlobalInclude/sphere.h"

#include <string>

#include <iostream>
#include <fstream>
#include <random>
#include <sys/time.h>  


#include "../GlobalInclude/Chapter/diffuse_light.h"
#include "../GlobalInclude/Chapter/Perlin.h"




hitable *sample_light();
hitable *sample_light_RGB();
hitable *cornell_box();
hitable *cornell_smoke();
hitable *final();
vec3 color(const ray& r, hitable *world, int depth);

#endif