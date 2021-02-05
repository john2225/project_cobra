#include <iostream>

int* DinamicArrFill(size_t size)
{
    int* arr = new int[size];
    for(int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 100;
    }
    return arr;
}

void PrintArr(int* arr, size_t size)
{
    for(int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " "
    }
    std::cout << std::endl;
}

void DeleteArr(int* &arr, size_t size)
{
    
}

int main()
{
    size_t size;
    std::cout << "Enter size of array: ";
    std::cin >> size;
    int* arr = DinamicArrFill(size);
    PrintArr(arr, size);
    return 0;
}
