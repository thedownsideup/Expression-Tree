#ifndef Add_H
#define Add_H

#include "operator.hpp"

class add : public myOperator
{
public:
	add(int index, int parentIndex);
	int evaluate(std::vector<int> numbers);
};

#endif