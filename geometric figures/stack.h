#pragma once
#include <vector>
struct Stack
{
private:
	std::vector<int> stack;
public:
	Stack();
	void push(int a);
	int pop();
};
