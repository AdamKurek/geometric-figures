#include "stack.h"




node::node()
{
	data = 0;
	previvious = nullptr;
}

node::node(int a)
{
	data = a;
	previvious = nullptr;
}
node::node(int a,node *wsk)
{
	data = a;
	previvious = wsk;
}

stack::stack()
{
	curr = nullptr;
}




void stack::push(int const a) noexcept
{
	//node* jd=;
	if (curr == nullptr)
	{
		node new_(a);
		curr = &new_;
	}
	else
	{
		node new_(a, curr);
		curr = &new_;
	}


		




	//stack curr;
	//curr.data = a;
	//curr.previvious = this;
	//return curr;

}

int stack::pop() 
{
	if (curr->previvious != nullptr)
	{
		int ret = curr->data;
		curr = curr->previvious;
		return ret;
	}
	else
	return 0;
}
