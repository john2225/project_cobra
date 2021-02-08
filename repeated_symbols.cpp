#include <iostream>
#include <string>

void RepeatedSymbol(std:: string str)
{
    int size = str.size();
    int table[128] = {0};
    for(int i = 0; i < size; ++i)
    {
        int position = str[i];
        ++table[position];
    }
    int maxSymbol = table[0];
    int maxIndex = 0;
    for(int i = 0; i < 128; ++i)
    {
        if(table[i] > maxSymbol)
        {
            maxSymbol = table[i];
            maxIndex = i;
        }
    }
    std::cout << char(maxIndex) << " occured " << maxSymbol << " times" << std::endl;

}

int main()
{
    std::string Str;
    std::cout << "Enter a word or sentence: ";
    getline(std::cin, Str);
    RepeatedSymbol(Str);
    return 0;
}
