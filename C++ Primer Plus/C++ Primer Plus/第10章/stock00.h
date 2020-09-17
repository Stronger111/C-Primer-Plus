#ifndef STOCK00_H_
#define STOCK00_H_

#include <string>

class Stock
{
public:
	void acquire(const std::string & co,long n,double pr);
	void buy(long num,double prices);
	void sell(long num,double prices);
	void update(double price);
	void show();
private:
	std::string company;
	long shares;
	double share_val;
	double total_val;
	void set_tot() { total_val = shares * share_val; }
};


#endif
