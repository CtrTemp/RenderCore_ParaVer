#pragma once
#ifndef SPHERE_H
#define SPHERE_H

#include "hitable.h"

class sphere : public hitable {//��sphere�࣬���캯������hitable*����
public:
	sphere() = default;
	sphere(vec3 cen, float r, material* mat) :center(cen), radius(r), mat_ptr(mat){};//����һ�����壬�������ĺͰ뾶����
	virtual bool hit(const ray& r, float tmin, float tmax, hit_record& rec) const;
	//�жϲ���������һ������
	virtual bool bounding_box(float t0, float t1, aabb& box) const;


	vec3 center;
	float radius;
	material *mat_ptr;
};



class moving_sphere :public hitable {
public:
	moving_sphere() = default;
	moving_sphere(vec3 cen0, vec3 cen1, float t0, float t1, float r, material* mat) :
		center0(cen0), center1(cen1), time0(t0), time1(t1), radius(r), mat_ptr(mat) {};

	virtual bool hit(const ray& r, float tmin, float tmax, hit_record& rec) const;
	virtual bool bounding_box(float t0, float t1, aabb& box) const { return false; }


	vec3 center(float time) const;
	
	vec3 center0, center1;
	float time0, time1;
	float radius;
	material *mat_ptr;

};



/*


aabb surronding_box(aabb box0, aabb box1)
{
vec3 small(
fmin(box0.min().x(), box1.min().x()),
fmin(box0.min().y(), box1.min().y()),
fmin(box0.min().z(), box1.min().z())
);

vec3 big(
fmax(box0.max().x(), box1.max().x()),
fmax(box0.max().y(), box1.max().y()),
fmax(box0.max().z(), box1.max().z())
);
return aabb(small, big);
}


*/

#endif