#include "../GlobalInclude/camera.h"


vec3 random_in_unit_disk()
{
	vec3 p;
	do {
		p = 2.0*vec3(drand48(), drand48(), 0) - vec3(1, 1, 0);
	} while (dot(p, p) >= 1.0);
	//ģ���ڷ��������㣬����ԲȦ�ĵ㱻��¼����
	return p;
}



ray camera::get_ray(float s, float t) 
{
		vec3 rd = lens_radius*random_in_unit_disk();//�õ��趨��״�С�ڵ�����ɢ�㣨��origin�㡪��viewpoint��
		//���ó˻��ĺ�һ���ǵ�λ��ף�
		vec3 offset = rd.x()*u + rd.y()*v;//origin�ӵ�����ƫ�ƣ���xoyƽ��ӳ�䵽u��vƽ�棩
		//return ray(origin + offset, lower_left_conner + s*horizontal + t*vertical - origin - offset);
		float time = time0 + drand48()*(time1 - time0);
		return ray(origin + offset, lower_left_conner + s*horizontal + t*vertical - origin - offset, time);
}


