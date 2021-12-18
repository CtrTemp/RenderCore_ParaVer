#pragma once
#ifndef __VOLUME_H
#define __VOLUME_H
//当前文件在GlobalInclude/Chapter/二级目录下
#include "../../GlobalInclude/hitable.h"
#include "../../GlobalInclude/hitableList.h"
#include "../../GlobalInclude/Chapter/diffuse_light.h"

class isotropic : public material {
public:
	isotropic() = default;
	isotropic(texture *a) :albedo(a) {}

	virtual bool scatter(const ray &r_in, const hit_record &rec, vec3 &attunuation, ray &scatter) const;

	texture *albedo;
};

bool isotropic::scatter(const ray &r_in, const hit_record &rec, vec3 &attunuation, ray &scattered) const {
	scattered = ray(rec.p, random_in_unit_sphere());
	attunuation = albedo->value(rec.u, rec.v, rec.p);
	return true;
}




class constant_medium :public hitable {
public:
	constant_medium() = default;
	constant_medium(hitable *b, float d, texture *a):boundary(b),density(d)
	{
		phase_function = new isotropic(a);
	}

	virtual bool hit(const ray &r, float t_min, float t_max, hit_record &rec)const;
	virtual bool bounding_box(float t0, float t1, aabb &box)const;


	hitable *boundary;
	float density;
	material *phase_function;
};




#endif


