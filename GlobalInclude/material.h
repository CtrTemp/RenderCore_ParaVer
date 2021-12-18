#pragma once
#ifndef MATERIAL_H
#define MATERIAL_H

struct hit_record;
//��ǰ�ļ���GlobalInclude/һ��Ŀ¼��
#include "../GlobalInclude/basic/vec3.h"
#include "../GlobalInclude/hitable.h"

#include "../GlobalInclude/random.h"
#include "../GlobalInclude/textures.h"



vec3 reflect(const vec3& v, const vec3& n);
bool refract(const vec3& v, const vec3& n, float ni_over_nt, vec3& refracted);
float schlick(float cosine, float ref_idx);


class material {
public:
	virtual bool scatter(const ray& r_in, const hit_record& rec, vec3& attenuated, ray& scattered) const = 0;
	virtual vec3 emitted(float u, float v, const vec3 &p) const { return vec3(0, 0, 0); }
};





/******************************** �ƹ���/��������� *********************************/

class lambertian :public material {
public:
	lambertian(texture *a) :albedo(a) {}
	virtual bool scatter(const ray& r_in, const hit_record& rec, vec3& attenuated, ray& scattered) const;

	//vec3 albedo;
	texture *albedo;
};

/******************************** ������/���� *********************************/
class mental :public material {
public:
	mental(const vec3& a, float f) : albedo(a) { if (f < 1)fuzz = f; else fuzz = 1; }

	virtual bool scatter(const ray& r_in, const hit_record& rec, vec3& attenuated, ray& scattered) const;

	vec3 albedo;
	float fuzz;
};



/******************************** ������/͸����� *********************************/
class dielectric :public material {
public:
	dielectric(float ri) : ref_idx(ri) {}
	virtual bool scatter(const ray& r_in, const hit_record& rec, vec3&attenuation, ray& scattered) const;

	float ref_idx;
};

#endif


/*


class dielectric :public material {
public:
dielectric(float ri) : ref_idx(ri) {}
virtual bool scatter(const ray& r_in, const hit_record& rec, vec3&attenuation, ray& scattered) const
{
vec3 outward_normal;
vec3 reflected = reflect(r_in.direction(), rec.normal);
float ni_over_nt;
attenuation = vec3(1.0, 1.0, 0.0);
vec3 refracted;
if (dot(r_in.direction(), rec.normal) > 0)
{
outward_normal = -rec.normal;
ni_over_nt = ref_idx;
}
else
{
outward_normal = rec.normal;
ni_over_nt = 1.0 / ref_idx;
}
if (refract(r_in.direction(), outward_normal, ni_over_nt, refracted))
{
scattered = ray(rec.p, refracted);
}
else
{
scattered = ray(rec.p, reflected);
return false;
}
return true;

}



float ref_idx;
};

*/