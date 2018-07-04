#include"bst.h"
int a = 0;
NodeInterface* bst::getRootNode()
{
	return head;
}
bool bst::add1(int data, nodeinterface1*& x)
{
		if(x==NULL)
		{
			x = new nodeinterface1;
			x->data1 = data;
			return true;
		}
		else if(x->getData()>data)
		{
			return add1(data, x->left);
		}
		else if (x->getData() < data)
		{
			return add1(data, x->right);
		}
		else
		{
			return false;
		}
}
bool bst::add(int data)
{
	return add1(data, head);

}
bool bst::remove123(int data, nodeinterface1*& x)
{
	if (x == NULL)
	{
		return false;
	}
	else if (x->getData() < data)
	{
		return remove123(data, x->right);
	}
	else if (x->getData() > data)
	{
		return remove123(data, x->left);
	}
	else
	{
		nodeinterface1* old = x;
		if (x->left == NULL)
		{
			x = x->right;
		}
		else if (x->right == NULL)
		{
			x = x->left;
		}
		else
		{ 
			replacement(old, x->left);
		}
		delete old;
		return true;
	}
}
bool bst::remove(int data)
{
	return remove123(data, head);
}
void bst::replacement(nodeinterface1*& old, nodeinterface1*& headroot)
{
	if (headroot->right != NULL)
	{
		replacement(old, headroot->right);
	}
	else
	{
		old->data1 = headroot->data1;
		old = headroot;
		headroot = headroot->left;
	}
}
void bst::clean(int data,nodeinterface1*& x)
{
	while (x != NULL)
	{
		remove123(x->getData(), x);
	}
}
void bst::clear()
{ 
	if (head != NULL)
	{
		clean(head->getData(), head);
	}
}  