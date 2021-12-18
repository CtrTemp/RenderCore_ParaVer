#include "../GlobalInclude/textures.h"



//����������ͼ���㶨��ɫ��
vec3 constant_texture::value(float u, float v, const vec3 &p) const {
	return color;
}


//���̸�������ͼ
vec3 checker_texture::value(float u, float v, const vec3& p) const {
	float sines = sin(10 * p.x())*sin(10 * p.y())*sin(10 * p.z());
	if (sines < 0)
		return odd->value(u, v, p);
	else
		return even->value(u, v, p);
}

