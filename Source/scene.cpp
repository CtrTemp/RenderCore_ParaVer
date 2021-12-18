#include "../GlobalInclude/scene.h"




vec3 color(const ray& r, hitable *world, int depth)
{

	hit_record rec;

	if (world->hit(r, 0.001, 999999, rec))//FLT_MAX
	{
		ray scattered;
		vec3 attenuation;
		vec3 emitted = rec.mat_ptr->emitted(rec.u, rec.v, rec.p);
		if (depth < 50 && rec.mat_ptr->scatter(r, rec, attenuation, scattered))
		{
			return emitted + attenuation*color(scattered, world, depth + 1);
		}
		else
		{
			return emitted;
		}
	}
	else
	{
		return vec3(0, 0, 0);
	}

}

//vec3 lookfrom(17, 17, 17);
//vec3 lookat(8, 0, 0);
hitable *sample_light() {
	texture *pertext = new noise_texture(5);
	hitable **list = new hitable *[5];
	list[0] = new sphere(vec3(0, -1000, 0), 1000, new lambertian(pertext));//Ground

	list[1] = new sphere(vec3(0, 2, 0), 2, new lambertian(pertext));//���������
	list[2] = new sphere(vec3(6, 2, 0), 2, new dielectric(1.5));//͸������
	list[3] = new sphere(vec3(0, 2, 6), 2, new mental(vec3(0.8, 0.8, 0.8), 0.5*drand48()));//��������

	list[4] = new sphere(vec3(0, 10, 0), 2, new diffuse_light(new constant_texture(vec3(10, 10, 10))));//���ƹ�Դ
	//list[5] = new xy_rect(3, 5, 1, 3, 3, new diffuse_light(new constant_texture(vec3(20, 0, 0))));
	//list[5] = new sphere(vec3(0, 7, 0), 2.2, new dielectric(1.5));

	

	return new hitable_list(list, 5);
}



//vec3 lookfrom(17, 17, 17);
//vec3 lookat(8, 0, 0);
hitable *sample_light_RGB() {
	texture *pertext = new noise_texture(5);
	hitable **list = new hitable *[8];
	list[0] = new sphere(vec3(0, -1000, 0), 1000, new lambertian(pertext));//Ground
	list[1] = new sphere(vec3(0, 2, 0), 2, new lambertian(pertext));
	list[2] = new sphere(vec3(2, 2, -4), 2, new dielectric(1.5));

	list[3] = new sphere(vec3(-2, 2, 6), 2, new mental(vec3(0.8, 0.8, 0.8), 0.5*drand48()));

	list[4] = new sphere(vec3(0, 7, 0), 2, new diffuse_light(new constant_texture(vec3(10, 10, 10))));

	list[5] = new xy_rect(5, 7, 1, 3, 0, new diffuse_light(new constant_texture(vec3(20, 0, 0))));
	list[6] = new xy_rect(5, 7, 1, 3, 3, new diffuse_light(new constant_texture(vec3(0, 20, 0))));
	list[7] = new xy_rect(5, 7, 1, 3, 6, new diffuse_light(new constant_texture(vec3(0, 0, 20))));

	

	return new hitable_list(list, 8);
}


//vec3 lookfrom(278, 278, -800);
//vec3 lookat(278, 278, 0);
hitable *cornell_box() {
	hitable **list = new hitable*[6];
	int i = 0;

	material *red = new lambertian(new constant_texture(vec3(0.65, 0.05, 0.05)));
	material *white = new lambertian(new constant_texture(vec3(0.73, 0.73, 0.73)));
	material *green = new lambertian(new constant_texture(vec3(0.12, 0.45, 0.15)));
	material *light = new diffuse_light(new constant_texture(vec3(7, 7, 7)));

	
	list[i++] = new flip_normals(new yz_rect(0, 555, 0, 555, 555, green));
	
	list[i++] = new yz_rect(0, 555, 0, 555, 0, red);
	list[i++] = new xz_rect(213, 343, 227, 332, 554, light);

	list[i++] = new flip_normals(new xz_rect(0, 555, 0, 555, 555, white));
	list[i++] = new xz_rect(0, 555, 0, 555, 0, white);
	list[i++] = new flip_normals(new xy_rect(0, 555, 0, 555, 555, white));

	return new hitable_list(list, i);

}


//vec3 lookfrom(278, 278, -800);
//vec3 lookat(278, 278, 0);
hitable *cornell_smoke() {
	hitable **list = new hitable*[8];
	int i = 0;

	material *red = new lambertian(new constant_texture(vec3(0.65, 0.05, 0.05)));
	material *white = new lambertian(new constant_texture(vec3(0.73, 0.73, 0.73)));
	material *green = new lambertian(new constant_texture(vec3(0.12, 0.45, 0.15)));
	material *light = new diffuse_light(new constant_texture(vec3(4, 4, 0)));


	list[i++] = new flip_normals(new yz_rect(0, 555, 0, 555, 555, green));
	list[i++] = new yz_rect(0, 555, 0, 555, 0, red);
	list[i++] = new xz_rect(113, 443, 127, 432, 554, light);

	list[i++] = new flip_normals(new xz_rect(0, 555, 0, 555, 555, white));
	list[i++] = new xz_rect(0, 555, 0, 555, 0, white);
	list[i++] = new flip_normals(new xy_rect(0, 555, 0, 555, 555, white));

	//list[i++] = new box(vec3(130, 0, 65), vec3(295, 165, 230), white);
	//list[i++] = new box(vec3(265, 0, 295), vec3(430, 330, 460), white);

	hitable *b1 = new translate(new rotate_y(new box(vec3(0, 0, 0), vec3(165, 165, 165), white), -18), vec3(130, 0, 65));
	hitable *b2 = new translate(new rotate_y(new box(vec3(0, 0, 0), vec3(165, 330, 165), white), 15), vec3(265, 0, 295));


	list[i++] = new constant_medium(b1, 0.01, new constant_texture(vec3(1.0, 1.0, 1.0)));//前面的正方体盒子
	list[i++] = new constant_medium(b2, 0.01, new constant_texture(vec3(0.0, 0.0, 0.0)));//后面的长方体盒子

	return new hitable_list(list, i);

}



//vec3 lookfrom(278, 300, -800);
//vec3 lookat(278, 278, 0);
hitable *final() {
	int nb = 20;
	hitable **list = new hitable*[30];
	hitable **boxlist = new hitable*[10000];
	hitable **boxlist2 = new hitable*[10000];

	material *white = new lambertian(new constant_texture(vec3(0.73, 0.73, 0.73)));
	material *ground = new lambertian(new constant_texture(vec3(0.48, 0.83, 0.53)));

	int b = 0;
	for (int i = 0; i < nb; ++i)
	{
		for (int j = 0; j < nb; ++j)
		{
			float w = 100;
			float x0 = -1000 + i*w;
			float z0 = -1000 + j*w;
			float y0 = 0;

			float x1 = x0 + w;
			float y1 = 100 * (drand48() + 0.01);
			float z1 = z0 + w;
			boxlist[b++] = new box(vec3(x0, y0, z0), vec3(x1, y1, z1), ground);
		}
	}

	int l = 0;
	list[l++] = new bvh_node(boxlist, b, 0, 1);
	material *light = new diffuse_light(new constant_texture(vec3(8, 8, 8)));
	list[l++] = new xz_rect(123, 423, 147, 412, 554, light);

	vec3 center(400, 400, 400);

	list[l++] = new moving_sphere(center, center + vec3(30, 0, 0), 0.0, 1.0, 50, new lambertian(new constant_texture(vec3(0.7,0.3,0.1))));
	list[l++] = new sphere(vec3(260, 150, 45), 50, new dielectric(1.5));
	list[l++] = new sphere(vec3(0, 150, 145), 50, new mental(vec3(0.8, 0.8, 0.9), 10.0));

	hitable *boundary = new sphere(vec3(360, 150, 145), 70, new dielectric(1.5));
	list[l++] = boundary;
	list[l++] = new constant_medium(boundary, 0.2, new constant_texture(vec3(0.2, 0.4, 0.9)));
	boundary = new sphere(vec3(0, 0, 0), 5000, new dielectric(1.5));
	list[l++] = new constant_medium(boundary, 0.0001, new constant_texture(vec3(1.0, 1.0, 1.0)));


	/*地图贴图我们省略了*/

	texture *pertext = new noise_texture(0.1);
	list[l++] = new sphere(vec3(220, 280, 300), 80, new lambertian(pertext));

	int ns = 1000;
	for (int j = 0; j < ns; j++)
	{
		boxlist2[j] = new sphere(vec3(165 * drand48(), 165 * drand48(), 165 * drand48()), 10, white);
	}
	list[l++] = new translate(new rotate_y(new bvh_node(boxlist2, ns, 0.0, 1.0), 15), vec3(-100, 270, 395));

	return new hitable_list(list, l);
}
