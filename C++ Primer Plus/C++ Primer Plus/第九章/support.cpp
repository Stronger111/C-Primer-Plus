#include <iostream>

extern double warming;

void update(double dt);
void local();

using std::cout;

void update(double dt)
{
	extern double warming;
	warming += dt;
	cout << "Updating global warming to" << warming;
	cout << " degress.\n";
}

void local()
{
	double warming = 0.8;
	cout << "Local warming= " << warming << "degress.\n ";
	cout << "But global warming= " << ::warming;   //::访问全局变量
	cout << "degress.\n";
}