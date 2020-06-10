#pragma once
#include <vector>
template <typename T>
struct Stack
{
private:
	std::vector<T> stack;
public:
	Stack() {}
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

};
