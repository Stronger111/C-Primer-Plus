#include<iostream>
#include<string>
using namespace std;

struct  job
{
	char name[40];
	double salary;
	int floor;
};

string version1(const string & s1,const string & s2);
const string & version2(string & s1,const string & s2);
const string & version3(string & s1,const string & s2);

//����ģ��,ͨ�ñ��,����������
//template <class T> ģ��
template <typename T>
void Swap(T &a,T &b);

//new template
template <typename T>
void Swap(T *a,T *b,int n);
//���廯ģ��
template <> 
void Swap<job>(job &j1,job &j2);

template <class T>
T lesser(T a,T b)
{
	return a < b ? a : b;
}
//int main()
//{
//
//}

string version1(const string & s1, const string & s2)
{
	string temp;
	temp = s2 + s1 + s2;
	return temp;
}

const string & version2(string & s1, const string & s2)
{
	s1 = s2 + s1 + s2;
	return s1;
}

const string & version3(string & s1, const string & s2)
{
	string temp;
	temp = s2 + s1 + s2;
	return temp;  //��ɱ���,����һ����ʱ����
}

template <typename T>
void Swap(T &a, T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template<typename T>
void Swap(T a[], T b[], int n)
{
	T temp;
	for (int i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
}

template <> //���廯ģ��
void Swap<job>(job &j1, job &j2)
{
	double t1;
	int t2;
	t1 = j1.salary;
	j1.salary = j2.salary;
	j2.salary = t1;
	t2 = j1.floor;
	j1.floor = j2.floor;
	j2.floor = t2;
}