#include <iostream>

void printRecursive(int num)
{
    if(num < 0) {return;}
    std::cout << "Number is: ";
    std::cout << num << " \n";
    printRecursive(num - 1);
}

int main()
{
    int number = 0;
    std::cout << "Enter a number: ";
    std::cin >> number;
    printRecursive(number);
    return 0;
}
