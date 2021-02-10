#include <iostream>

int fibonacciRecursive(int num)
{
    return (num < 2) ? num : fibonacciRecursive(num - 1) + fibonacciRecursive(num - 2);
}
int main()
{
    int index_fibonacci = 0;
    std::cout << "Enter index for Fibonacci: ";
    std::cin >> index_fibonacci;
    int result = fibonacciRecursive(index_fibonacci);
    std::cout << index_fibonacci << " Fibonacci number is: " << result << std::endl;
    return 0;
}
