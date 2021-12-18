#include "../GlobalInclude/sphere.h"




bool sphere::hit(const ray& r, float t_min, float t_max, hit_record& rec) const
{
	vec3 oc = r.origin() - center;
	float a = dot(r.direction(), r.direction());
	float b = 2.0 * dot(oc, r.direction());
	float c = dot(oc, oc) - radius*radius;
	float discriminant = b*b - 4 * a*c;
	//�����ǲ���д���ˣ���Ӧ����b*b-4acô
	//�������Ѿ��������޸ģ���Ӧ����b*b - 4*a*c



	//������һ�����ȷ���ԭ�����ȷ���˫������۲�㣨���߷���㣩����Ļ��е�
	//ע�⣡�����Ǵ����ã��ں����о�ֱ�ӿ��Ըı� rec�ṹ����� �ĸ���ֵ
	if (discriminant > 0)
	{
		float temp = (-b - sqrt(discriminant)) / a / 2;
		if (temp<t_max && temp>t_min)
		{
			rec.t = temp;//�õ����е�� tֵ ��������record
			rec.p = r.point_at_parameter(rec.t);//�õ����е������ ��������record
			rec.normal = (rec.p - center) / radius;//�õ����е�ĵ�λ��������
			rec.mat_ptr = this->mat_ptr;
			return true;
		}
		temp = (-b + sqrt(discriminant)) / a / 2;
		if (temp<t_max && temp>t_min)
		{
			rec.t = temp;
			rec.p = r.point_at_parameter(rec.t);
			rec.normal = (rec.p - center) / radius;
			rec.mat_ptr = this->mat_ptr;
			return true;
		}
	}
	return false;
}



bool sphere::bounding_box(float t0, float t1, aabb& box) const {
	box = aabb(center - vec3(radius, radius, radius), center + vec3(radius, radius, radius));
	return true;
}



vec3 moving_sphere::center(float time)const {
	return center0 + ((time - time0) / (time1 - time0)*(center1 - center0));
}


bool moving_sphere::hit(const ray& r, float t_min, float t_max, hit_record& rec)const {
	
	vec3 oc = r.origin() - center(r.time());
	float a = dot(r.direction(), r.direction());
	float b = 2.0 * dot(oc, r.direction());
	float c = dot(oc, oc) - radius*radius;
	float discriminant = b*b - 4 * a*c;




	//������һ�����ȷ���ԭ�����ȷ���˫������۲�㣨���߷���㣩����Ļ��е�
	//ע�⣡�����Ǵ����ã��ں����о�ֱ�ӿ��Ըı� rec�ṹ����� �ĸ���ֵ
	if (discriminant > 0)
	{
		float temp = (-b - sqrt(discriminant)) / a / 2;
		if (temp<t_max && temp>t_min)
		{
			rec.t = temp;//�õ����е�� tֵ ��������record
			rec.p = r.point_at_parameter(rec.t);//�õ����е������ ��������record
			rec.normal = (rec.p - center(r.time())) / radius;//�õ����е�ĵ�λ��������
			rec.mat_ptr = this->mat_ptr;
			return true;
		}
		temp = (-b + sqrt(discriminant)) / a / 2;
		if (temp<t_max && temp>t_min)
		{
			rec.t = temp;
			rec.p = r.point_at_parameter(rec.t);
			rec.normal = (rec.p - center(r.time())) / radius;
			rec.mat_ptr = this->mat_ptr;
			return true;
		}
	}
	return false;
}
