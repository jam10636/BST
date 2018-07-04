#include"node.h"
int nodeinterface1::getData()
{
	return data1;
}
NodeInterface* nodeinterface1::getLeftChild()
{
	if (left != NULL)
	{
		return left;
	}
	return NULL;
}
NodeInterface* nodeinterface1::getRightChild()
{
	if (right != NULL)
	{
		return right;
	}
	return NULL;
}