#include <stdio.h>
#include <iostream>
#include <vector>
#include <array>
//1��ֻ����delete���ͷ�ʹ��new������ڴ�,Ȼ���Կ�ָ��ʹ��deleteʱ��ȫ��
//2: doubleָ��+1,doubleʹ��8���ֽ� ����ֵ������8
void estimate(int lines,double (*pf)(int));
typedef double real;
typedef const double * (*p_fun)(const double *, int);
const double * f1(const double ar[],int n);
const double * f2(const double [], int n);
const double * f3(const double *, int n);
int main()
{
	using namespace std;
	/*ָ��*/
	int * pt = new int; //new �洢��heap �� 
	delete pt; //�ͷŵ� pt�ڴ�
	//������̬����
	int * psome = new int[10];
	delete[] psome;
	//����Ĵ���Ʒ vector
	cout << "aaaa" << endl;
	vector<int> vi;
	int n;
	cin >> n;
	vector<double> vd(n); //n����С
	array<int, 5> ai;
	//ָ�뺯��
	const double * (*p1)(const double *, int) = f1;
	auto p2 = f2;
	const double * (*pa[3])(const double *, int) = {f1,f2,f3}; //����ָ������
	p_fun p3 = f1;
	//����ָ��
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
//����ָ��  ����ֵ��double ����ֵΪint
void estimate(int lines, double(*pf)(int))
{

}