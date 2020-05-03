#ifndef MEDIAN_H
#define MEDIAN_H

#include "operator.hpp"

#include <algorithm>
#include <vector>

class median : public myOperator
{
public:
	median(int index, int parentIndex);
	int evaluate(std::vector<int> numbers);
};

#endif