#include "stack.h"


Stack::Stack()
{
	
}

void Stack::push(int a)
{
	stack.push_back(a);
}

int Stack::pop()
{
	
	if (stack.size()>0)
	{
		int b = stack[stack.size() - 1];
		stack.pop_back();					
		return b;							
	}										
	else 
		throw 3;		
}
