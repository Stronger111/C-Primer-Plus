//#include <iostream>
//#include "mytime00.h"
//
//Time::Time()
//{
//	hours = minutes = 0;
//}
//
//Time::Time(int h,int m)
//{
//	hours = h;
//	minutes = m;
//}
//
//void Time::AddMin(int m)
//{
//	minutes += m;
//	hours += minutes / 60;
//	minutes %= 60;
//}
//
//void Time::AddHr(int h)
//{
//	hours += h;
//}
//
//void Time::Reset(int h,int m)
//{
//	hours = h;
//	minutes = m;
//}
//
//Time Time::Sum(const Time &t) const
//{
//	Time sum;
//	sum.minutes = minutes + t.minutes;
// 	sum.hours = hours + t.hours+sum.minutes/60;
//	sum.minutes %= 60;
//	return sum;
//}
//
//Time Time::operator+(const Time &t) const
//{
//	Time sum;
//	sum.minutes = minutes + t.minutes;
//	sum.hours = hours + t.hours + sum.minutes / 60;
//	sum.minutes %= 60;
//	return sum;
//}
////
////Time operator*(double n,const Time &t)
////{
////
////}
////
//std::ostream & operator<<(std::ostream &os, const Time &t)
//{
//	os << t.hours << "hours ," << t.minutes << "minutes";
//	return os;
//}
//
