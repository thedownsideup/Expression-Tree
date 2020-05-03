#ifndef NOT_H
#define NOT_H

#include "operator.hpp"

class notOperator : public myOperator
{
public:
	notOperator(int index, int parentIndex);
	int evaluate(std::vector<int> numbers);	
};

#endif