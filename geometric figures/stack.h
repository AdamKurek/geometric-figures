#pragma once

struct node
{
private:
	int data;
	node* previvious;
public:
	node();
	node(int a);
	node(int a, node* wsk);
	friend class stack;
};

class stack
{
private:
	node *curr;
public:
	stack();
	void push(int const a)noexcept;
	int pop();

	//friend struct node;
};
