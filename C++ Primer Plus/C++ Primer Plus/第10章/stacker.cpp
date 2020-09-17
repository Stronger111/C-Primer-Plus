#include <iostream>
#include <cctype>
#include "stack.h"

int mainD()
{
	using namespace std;
	Stack st;
	char ch;
	unsigned long po;
	cout << "Please enter A to add a purchase order.\n" << "P to process a PO,pr Q to quit.\n";
	while (cin>>ch && toupper(ch)!='Q') //�����ж� ��ΪQ 
	{
		while (cin.get() != '\n')
			continue;
		if (!isalpha(ch))  //�����ж�һ���ַ��Ƿ�Ϊ��ĸ��������ַ��򷵻ط��㣬���򷵻��� 
		{
			cout << '\a';
			continue;
		}

		switch (ch)
		{
		case 'A':
		case 'a':
			cout << "Enter a PO number to add:";
			cin >> po;
			if (st.isfull())
			{
				cout << "Stack already full\n";
			}
			else
				st.push(po);
			break;
		case 'p':
		case 'P':
			if (st.isempety())
				cout << "Stack already empty\n";
			else
			{
				st.pop(po);
				cout << "PO #" << po << " popped\n";
			}
			break;
		}
		cout << "Please enter A to Add a purchase order,\n" << "P to process a PO,or Q to quit.\n";
	}
	cout << "Byte\n";
	return 0;
}