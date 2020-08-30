#include <stdio.h>
#include <iostream>
#include <vector>
#include <array>
//1：只能用delete来释放使用new分配的内存,然而对空指针使用delete时安全的
//2: double指针+1,double使用8个字节 则数值将增加8
void estimate(int lines,double (*pf)(int));
typedef double real;
typedef const double * (*p_fun)(const double *, int);
const double * f1(const double ar[],int n);
const double * f2(const double [], int n);
const double * f3(const double *, int n);
int main()
{
	using namespace std;
	/*指针*/
	int * pt = new int; //new 存储在heap 堆 
	delete pt; //释放掉 pt内存
	//创建动态数组
	int * psome = new int[10];
	delete[] psome;
	//数组的代替品 vector
	cout << "aaaa" << endl;
	vector<int> vi;
	int n;
	cin >> n;
	vector<double> vd(n); //n个大小
	array<int, 5> ai;
	//指针函数
	const double * (*p1)(const double *, int) = f1;
	auto p2 = f2;
	const double * (*pa[3])(const double *, int) = {f1,f2,f3}; //函数指针数组
	p_fun p3 = f1;
	//函数指针
	return 0;
}
const double * f1(const double ar[], int n)
{
	return ar+2;
}
const double * f2(const double ar[], int n)
{
	return ar + 1;
}
const double * f3(const double * ar, int n)
{
	return ar;
}
//函数指针  返回值是double 参数值为int
void estimate(int lines, double(*pf)(int))
{

}