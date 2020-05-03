#include "not.hpp"

notOperator::notOperator(int index, int parentIndex)
{
	this->index = index;
	this->parentIndex = parentIndex;
}

int notOperator::evaluate(std::vector<int> numbers)
{
	return -numbers[0];
}