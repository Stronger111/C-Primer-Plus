#include <iostream>
#ifndef STRINGBAD_H
#define STRINGBAD_H

class StringBad
{
public:
	StringBad(const char* s);
	StringBad();
	~StringBad();
	friend std::ostream& operator <<(std::ostream& os,const StringBad& st);
private:
	char* str;
	int len;
	static int num_strings;
};


#endif // ! STRINGBAD_H

