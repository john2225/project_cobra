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
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int OddArray(int* arr, size_t size)
{
    int count_of_odds = 0;
    for(int i = 0; i < size; ++i)
    {
        if(1 == (arr[i] & 1))
        {
            ++count_of_odds;
        }
    }
    return count_of_odds;
}

void DeleteArr(int* arr)
{
    delete [] arr;
    arr = nullptr;
}

int main()
{
    size_t size;
    std::cout << "Enter size of array: ";
    std::cin >> size;
    int* arr = DinamicArrFill(size);
    PrintArr(arr, size);
    int odd_count = OddArray(arr, size);
    std::cout << "Count of odd numbers is: " << odd_count << std::endl;
    DeleteArr(arr);
    return 0;
}
