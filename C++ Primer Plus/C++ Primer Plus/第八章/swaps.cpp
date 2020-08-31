#include <iostream>
/*
void swapr(int & a,int & b); //按照引用别名进行传递参数 可以
void swapp(int * p,int * q);  //指针传递可以
void swapv(int a,int b);
int main()
{
	using namespace std;
	int wallet1 = 300;
	int wallet2 = 350;
	cout << "wallet1=" << wallet1;
	cout << "wallet2=" << wallet2<<endl;

	cout << "引用交换后的值为\n";
	swapr(wallet1,wallet2);
	cout << "wallet1=" << wallet1;
	cout << "wallet2=" << wallet2 << endl;

	cout << "指针交换后的值为\n";
	swapp(&wallet1,&wallet2);
	cout << "wallet1=" << wallet1;
	cout << "wallet2=" << wallet2 << endl;

	cout << "交换失败\n";
	swapv(wallet1, wallet2);
	cout << "wallet1=" << wallet1;
	cout << "wallet2=" << wallet2 << endl;
	return 0;
}

void swapr(int & a, int & b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void swapp(int * p, int * q)
{
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
}

void swapv(int a, int b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}
*/