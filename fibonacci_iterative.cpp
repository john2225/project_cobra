#include <iostream>

int fibonacciIterative(int num)
{
    int tmp1 = 0;
    int tmp2 = 1;
    int tmp3;
    if(num == 0)
    { return tmp1;}
    for(int i = 2; i <= num; ++i)
    {
        tmp3 = tmp1 + tmp2;
        tmp1 = tmp2;
        tmp2 = tmp3;
    }
    return tmp2;
    
}

int main()
{
    int index_fibonacci = 0;
    std::cout << "Enter index for Fibonacci: ";
    std::cin >> index_fibonacci;
    std::cout << index_fibonacci << " Fibonacci number is: " << fibonacciIterative(index_fibonacci) << std::endl;
    return 0;
}
