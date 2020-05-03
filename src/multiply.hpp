#ifndef MULTIPLY_H
#define MULTIPLY_H

#include "operator.hpp"

class multiply : public myOperator
{
public:
	multiply(int index, int parentIndex);
	int evaluate(std::vector<int> numbers);
};

#endif