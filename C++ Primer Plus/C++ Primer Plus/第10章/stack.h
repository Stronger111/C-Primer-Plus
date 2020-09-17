#pragma once
#ifndef STACK_H_
#define STACK_H_

typedef unsigned long Item;  //Item为long类型

class Stack
{
public:
	Stack();
	bool isempety() const;
	bool isfull() const;//const 表示不会修改对象
	bool push(const Item & item);
	bool pop(Item & item);
	~Stack();
private:
	enum {MAX = 10};
	Item items[MAX];
	int top;
};

#endif // !STACK_H_
