#include "stack.h"

Stack::Stack()
{
	top = 0;
}

bool Stack::isempety() const
{
	return top == 0;
}

bool Stack::isfull() const
{
	return top == MAX;
}

bool Stack::push(const Item & item)
{
	if (top<MAX) //�ж��Ƿ��Ѿ�����
	{
		items[top++] = item;
		return true;
	}
	else
	{
		return false;
	}
}

bool Stack::pop(Item & item)
{
   if (top>0)
   {
	   item = items[--top];
	   return true;
   }
   else
   {
	   return false;
   }
}

Stack::~Stack()
{

}