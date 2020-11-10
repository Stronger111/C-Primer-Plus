#ifndef STONEWT_H_H
#define STONEWT_H_H
class Stonewt
{
private:
	enum
	{
		Lbs_per_stn = 14
	};
	int stone;
	double pds_left;
	double pounds;
public:
	Stonewt(double lbs);
	Stonewt(int stn,double lbs);
	Stonewt();
	~Stonewt();
	void show_lbs() const; //函数后面加const表示类方法不会修改对象
	void show_stn() const;
	operator int() const;  //转换函数的定义
	operator double() const;
private:

};


#endif // STONEWT_H_H

