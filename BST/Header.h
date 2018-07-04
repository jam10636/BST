#pragma once
#include"BSTInterface.h"
#include"node.h"
class bst1
{
protected:
	nodeinterface1* root = NULL;
public:
	bool add1(int data, nodeinterface1*& x)
	{
		if (x == NULL)
		{
			x = new nodeinterface1;
			x->data1 = data;
			return true;
		}
		else if (x->data1 < data)
		{
			return add1(data, x->right);
		}
		else if (x->data1 > data)
		{
			return add1(data, x->left);
		}
		else
		{
			return false;
		}
	}
	bool remove(int data, nodeinterface1*& x)
	{
		if (x == NULL)
		{
			return false;
		}
		else if (x->data1 < data)
		{
			return remove(data, x);
		}
		else if (x->data1 > data)
		{
			return remove(data, x);
		}
		else
		{
			nodeinterface1*temp = x;
			//find the data;
			if (x->right == NULL)
			{
				x = x->left;
			}
			else if (x->left == NULL)
			{
				x = x->right;
			}
			else
			{
				temp = temp->left;
				while (temp->right != NULL)
				{
					temp = temp->right;
					x->data1 = temp->data1;
					x = temp;
					x = x->left;
				}
			}
			delete temp;
			return true;
		}
	}
};