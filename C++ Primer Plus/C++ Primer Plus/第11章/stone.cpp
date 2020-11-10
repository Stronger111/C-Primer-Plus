#include <iostream>
#include <memory>
using std::cout;
#include "stonewt.h"
using namespace std;
void display(const Stonewt &st,int n);

int mainDXS()
{
	Stonewt incognito = 275;
	Stonewt wolfe(285.7);
	Stonewt taft(21,8);
	cout << "The celebrity weighted ";
	incognito.show_stn();
	cout << "The detective weighted ";
	wolfe.show_stn();
	cout << "The President weighted ";
	taft.show_lbs();
	incognito = 276.8;
	taft = 325;
	cout << "After dinner,the President weighted ";
	taft.show_stn();
	cout << "After dinner,the Preident weighted ";
	taft.show_lbs();
	display(422,2);
	cout << "No stone left unearned\n";
	//智能指针
	//shared_ptr<int>  p1 = make_shared<int>(32);
	//cout << " Share_Ptr Size of" << sizeof(p1) << endl;
	cout << "************************\n";
	Stonewt poppins(9,2.8);
	double p_wt = poppins;
	cout << "Convert to double=> ";
	cout << "Poppins: " << p_wt << " pounds.\n";
	cout << "Convert to int =>";
	cout << "Poppins: " << int(poppins) << "pounds.\n";
	return 0;
}

void display(const Stonewt& st, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Wow!  ";
		st.show_stn();
	}
}
