#include <iostream>

int Int2Arr(int num, int digit);


int main()
{
    int number = 0;
    std::cout << "Enter a number: ";
    std::cin >> number;
    int k = 0;
    std::cout << "Enter k digit: ";
    std::cin >> k;
    number = Int2Arr(number, k);
    std::cout << number << " " <<std::endl;
    return 0;
}

int Int2Arr(int num, int digit)
{
    int result = 0;
    int tmp = 10;
    while(digit--)
    {
        result = 0;
        result += num % tmp;
        tmp *= 10;
    }
    return result;
}
