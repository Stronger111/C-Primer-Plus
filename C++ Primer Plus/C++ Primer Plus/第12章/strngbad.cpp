#include <cstring>
#include "stringbad.h"
using std::cout;
//所有类对象共享一个num_strings  静态
int StringBad::num_strings = 0;
StringBad::StringBad(const char* s)
{
	//字符长度
	len = std::strlen(s);
	str = new char[len+1];
	std::strcpy(str,s);
	num_strings++;
	cout << "num_strings" << ": \"" << str << "\" object created\n ";
}

StringBad::StringBad()
{
	len = 4;
	str = new char[4];
	std::strcpy(str,"C++");
	num_strings++;
	cout << "num_strings" << ": \"" << str << "\" object created\n ";
}

StringBad::~StringBad()
{
	cout << "\"" << str << "\" object deleted, ";
	--num_strings;
	cout << num_strings << " left\n";
	delete[] str;
}
//运用输出流 <<
std::ostream& operator<<(std::ostream& os, const StringBad& st)
{
	os << st.str;
	return os;
}
