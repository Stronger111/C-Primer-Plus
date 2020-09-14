//#include<iostream>
//#include<string>
//
//struct free_throws
//{
//	std::string name;
//	int made;
//	int attempts;
//	float percent;
//};
//
//void display(const free_throws & ft); //const ·ÀÖ¹±»ÐÞ¸Ä
//void set_pc(free_throws & ft);
//free_throws & accumulate(free_throws & target,const free_throws & source);
//int main()
//{
//	free_throws one = {"One",13,14};
//	free_throws two = { "two",10,16 };
//	free_throws three = { "three",7,9 };
//	free_throws four = { "four",5,9 };
//	free_throws five = { "five",6,14 };
//	free_throws team = {"team",0,0};
//
//	free_throws dup;
//
//	set_pc(one);
//	display(one);
//	return 0;
//}
//
//void set_pc(free_throws & ft)
//{
//	if (ft.attempts != 0)
//		ft.percent = 100.0f*float(ft.made) / float(ft.attempts);
//	else
//		ft.percent = 0;
//}
//
//void display(const free_throws & ft)
//{
//	using std::cout;
//	cout << "Name :" << ft.name  << '\n';
//	cout << "  Made:" << ft.made << '\t';
//	cout << "Attempts" << ft.attempts << '\t';
//	cout << "Percent" << ft.percent << '\n';
//}
////½»»»
//free_throws & accumulate(free_throws & target, const free_throws & source)
//{
//	target.attempts += source.attempts;
//	target.made += source.made;
//	set_pc(target);
//	return target;
//}