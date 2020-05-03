#include "multiply.hpp"

multiply::multiply(int index, int parentIndex)
{
	this->index = index;
	this->parentIndex = parentIndex;
}

int multiply::evaluate(std::vector<int> numbers)
{
	return numbers[0] * numbers[1];
}