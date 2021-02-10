#include <iostream>
#include <string>

std::string toReverseStr(std::string);

int main()
{
    std::string Str;
    std::cout << "Enter a string: ";
    std::cin >> Str;
    std::string reversed_Str = toReverseStr(Str);
    std::cout << Str << " to reverse " << reversed_Str << std::endl;
    return 0;
}

std::string toReverseStr(std::string str)
{   char tmp = '\0';
    int length = str.length();
    for(int i = 0; i < length / 2; ++ i)
    {
        tmp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = tmp;
    }
    return str;
}
