#pragma once
#include <vector>
template <typename T>
struct Stack
{
private:
	std::vector<T> stack;
public:
	Stack(){}
	void push(T a)
	{
		stack.push_back(a); 
	}
	T pop()
	{

		if (stack.size() > 0)
		{
			T b = stack[stack.size() - 1];
			stack.pop_back();
			return b;
		}
		else
			throw 3;
	}
	T last()
	{
		return stack.front();
	}
	void deletelast(int a)
	{
		for (;a>0;a--)
	if(! stack.empty())
		stack.pop_back();
	else
		throw 3;
	}
	void deletelast()
	{
			if (!stack.empty())
				stack.pop_back();
			else
				throw 3;
	}
	bool empty()
	{
		return stack.empty();
	}
	void clear()
	{
		stack.clear();
	}
};
