#pragma once
#ifndef STACK_H_
#define STACK_H_

typedef unsigned long Item;  //ItemΪlong����

class Stack
{
public:
	Stack();
	bool isempety() const;
	bool isfull() const;//const ��ʾ�����޸Ķ���
	bool push(const Item & item);
	bool pop(Item & item);
	~Stack();
private:
	enum {MAX = 10};
	Item items[MAX];
	int top;
};

#endif // !STACK_H_
