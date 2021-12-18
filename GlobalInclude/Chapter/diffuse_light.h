#pragma once
//��ǰ�ļ���GlobalInclude/Chapter/����Ŀ¼��
#include "../../GlobalInclude/material.h"
#include "../../GlobalInclude/textures.h"
#include "../../GlobalInclude/hitable.h"

class diffuse_light : public material {
public:
	diffuse_light() = default;
	diffuse_light(texture *a) :emit(a) {}
	virtual bool scatter(const ray& r_in, const hit_record& rec, vec3& attenuated, ray& scattered) const;

	virtual vec3 emitted(float u, float v, const vec3 &p)const;
	

	texture *emit;
};



class xy_rect : public hitable {
public:
	xy_rect() = default;
	xy_rect(float _x0, float _x1, float _y0, float _y1, float _k, material *mat) :
		x0(_x0), x1(_x1), y0(_y0), y1(_y1), k(_k), mp(mat) {};

	virtual bool hit(const ray& r, float t0, float t1, hit_record &rec)const;
	virtual bool bounding_box(float t0, float t1, aabb &box) const;

	material *mp;
	float x0, y0, x1, y1, k;
};


class xz_rect : public hitable {
public:
	xz_rect() = default;
	xz_rect(float _x0, float _x1, float _z0, float _z1, float _k, material *mat) :
		x0(_x0), x1(_x1), z0(_z0), z1(_z1), k(_k), mp(mat) {};

	virtual bool hit(const ray& r, float t0, float t1, hit_record &rec)const;
	virtual bool bounding_box(float t0, float t1, aabb &box) const;

	material *mp;
	float x0, z0, x1, z1, k;
};


class yz_rect : public hitable {
public:
	yz_rect() = default;
	yz_rect(float _y0, float _y1, float _z0, float _z1, float _k, material *mat) :
		y0(_y0), y1(_y1), z0(_z0), z1(_z1), k(_k), mp(mat) {};

	virtual bool hit(const ray& r, float t0, float t1, hit_record &rec)const;
	virtual bool bounding_box(float t0, float t1, aabb &box) const;

	material *mp;
	float y0, z0, y1, z1, k;
};




class  flip_normals :public hitable {
public:
	flip_normals() = default;
	flip_normals(hitable *p) :ptr(p) {}
	virtual bool hit(const ray &r, float t_min, float t_max, hit_record &rec) const;
	virtual bool bounding_box(float t0, float t1, aabb &box) const;

	hitable *ptr;
};


