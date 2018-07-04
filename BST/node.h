#pragma once
#include"NodeInterface.h"
class nodeinterface1 :public NodeInterface
{
	friend class bst;
	friend class bst1;
public:
	nodeinterface1() {
		data1 = 0;
		right = NULL;
		left = NULL;
	}
	~nodeinterface1(){}
	int getData();
	NodeInterface * getLeftChild();
	NodeInterface * getRightChild();
protected:
	int data1;
	nodeinterface1* right;
	nodeinterface1* left;
};
