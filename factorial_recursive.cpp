#include <iostream>

int factorialRecursive(int n)
{
	return (n <= 1) ? 1: n * factorialRecursive(n - 1);
} 

int main() 
{	
    int number = 0;
	std::cout << "Enter a number: ";
	std::cin >> number;
	int factorial_num = factorialRecursive(number);
	std::cout << number << " factorial equals " << factorial_num << std::endl;
	return 0;
}
