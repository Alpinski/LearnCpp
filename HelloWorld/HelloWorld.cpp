#include<iostream>
#include<limits>

int inToConsoleInteger(int integerInput);
void outToConsoleInteger(int integerOutput);
int doubleNumber(int numToDouble);

int main()
{
	int nNumInput{ 0 };

	int nReceivedNumber{ inToConsoleInteger(nNumInput) };
	int nDoubledNumber{ doubleNumber(nReceivedNumber) };

	outToConsoleInteger(nDoubledNumber);
	
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