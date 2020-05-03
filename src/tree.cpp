#include "tree.hpp"
#include <iostream>

void tree::add_number_node(int index, int parentIndex, int value)
{
	operand* node = new operand(value ,index, parentIndex);
	nodes.push_back(node);
}

void tree::add_operator_node(int index, int parentIndex, OperatorType type)
{
	try
	{
		if(type == Add)
		{
			add* node = new add(index, parentIndex);
			nodes.push_back(node);
		}
		else if(type == Multiply)
		{
			multiply* node = new multiply(index, parentIndex);
			nodes.push_back(node);
		}
		else if(type == Not)
		{
			notOperator* node = new notOperator(index, parentIndex);
			nodes.push_back(node);
		}
		else if(type == Median)
		{
			median* node = new median(index, parentIndex);
			nodes.push_back(node);
		}
		else
		{
			throw Exception();
		}
	}

	catch(Exception e)
	{
		std::cout << "This Program doesn't support this operator." << std::endl;
	}
}

int tree::evaluate()
{
	return recursiveEvaluate(findRoot());
}

int tree::recursiveEvaluate(node* node)
{
	std::vector<int> numbers;
	for (int i = 0; i < nodes.size(); ++i)
	{
		if(nodes[i]->getParentIndex() == node->getIndex())
		{
			numbers.push_back(recursiveEvaluate(nodes[i]));
		}
	}
	return node->evaluate(numbers);
}

node* tree::findRoot()
{
	node* root;
	try
	{
		for (int i = 0; i < nodes.size(); ++i)
		{
			if(nodes[i]->getParentIndex() == NO_PARENT)
			{
				root = nodes[i];
			}
		}
		if(root == NULL)
		{
			throw NoRootException();
		}
	}

	catch(NoRootException e)
	{
		std::cout << "No root." << std::endl;
	}

	return root;
}