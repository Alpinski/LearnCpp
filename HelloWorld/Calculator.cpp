#include<iostream>
#include "Calculator.h"

void add()
{
    double nAmountofNumbersToAdd{};
    double nSum = 0;

    std::cout << "How many numbers do you want to add? ";
    std::cin >> nAmountofNumbersToAdd;

    double* arrAmountOfNums{ new double[(int)nAmountofNumbersToAdd] };

    if (nAmountofNumbersToAdd > 1)
    {
        std::cout << "Enter " << nAmountofNumbersToAdd << " numbers: "; 
        for (int i = 0; i < nAmountofNumbersToAdd; i++)
        {
            std::cin >> arrAmountOfNums[i];
            nSum += arrAmountOfNums[i];
        }
    }
    else
    {
        std::cout << "Enter number greater than 0!" << std::endl;
        add();
    }
    std::cout << nSum << std::endl;
    delete[] arrAmountOfNums;
}

void division()
{
    double nAmountofNumbersToDiv{};
    double nSum{};

    std::cout << "How many numbers do you want to divide? ";
    std::cin >> nAmountofNumbersToDiv;

    double* arrAmountOfNums{ new double[(int)nAmountofNumbersToDiv] };

    if (nAmountofNumbersToDiv > 1)
    {
        std::cout << "Enter " << nAmountofNumbersToDiv << " numbers: ";
        for (int i = 0; i < nAmountofNumbersToDiv; i++)
        {
            std::cin >> arrAmountOfNums[i];
        }
        nSum = arrAmountOfNums[0];
        for (int i = 1; i < nAmountofNumbersToDiv; i++)
        {
            nSum /= arrAmountOfNums[i];
        }
    }
    else
    {
        std::cout << "Enter number greater than 0!" << std::endl;
        division();
    }
    std::cout << nSum << std::endl;
    delete[] arrAmountOfNums;
}