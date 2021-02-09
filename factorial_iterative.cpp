#include <iostream>

int factorialIterative(int n)
{	int fact_number = 1;
    for(int i = 1; i <= n; ++i)
    {
        fact_number *= i;
    }
    return fact_number;
}

int main() 
{
	int number = 0;
	std::cout << "Enter a number: ";
	std::cin >> number;
	std::cout << number << " factorial is " <<  factorialIterative(number) << std::endl;
	return 0;
}
