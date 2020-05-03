#ifndef NODE_H
#define NODE_H

#include <vector>

class node
{
public:
	virtual int evaluate(std::vector<int> numbers) = 0;
	int getIndex();
	int getParentIndex();
protected:
	int index;
	int parentIndex;

};

#endif