#include <iostream>

void printIterative(int num)
{
    if(num < 0) {
        std::cout << "Negative number \n";
    }
    for(int i = num; i >= 0; --i)
    {
        std::cout << "Number is: " << i << std::endl;
    }
}

int main()
{
    int number = 0;
    std::cout << "Enter a number: ";
    std::cin >> number;
    printIterative(number);
    return 0;
}
