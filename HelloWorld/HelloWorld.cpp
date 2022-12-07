#include<iostream>
#include<limits>
#include "Calculator.h"

int inToConsoleInteger(int integerInput);
void outToConsoleInteger(int integerOutput);
int doubleNumber(int numToDouble);

int main()
{
	int nCalculatorFunctionPick{};
	std::cout << "Pick a calculator function:" << '\n';
	std::cout << "1.Addition" << '\n';
	std::cout << "2.Division" << '\n';


	std::cin >> nCalculatorFunctionPick;

	if (nCalculatorFunctionPick == 1)
	{
		add();
	}
	if (nCalculatorFunctionPick == 2)
	{
		division();
	}
	
	return EXIT_SUCCESS;
}

int inToConsoleInteger(int integerInput)
{
	std::cin >> integerInput;
	return integerInput;
}

void outToConsoleInteger(int integerOutput)
{
	std::cout << integerOutput << '\n';
}

int doubleNumber(int numToDouble)
{
	return 2 * numToDouble;
}