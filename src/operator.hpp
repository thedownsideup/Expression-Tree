#ifndef OPERATOR_H
#define OPERATOR_H

#include "node.hpp"

class myOperator : public node
{
public:
	virtual int evaluate(std::vector<int> numbers) = 0;
};

#endif