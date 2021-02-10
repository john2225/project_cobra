#include <iostream>

int* create_fillArr(size_t);
void printArrRecursive(int*, size_t);

int main()
{
    size_t size = 0;
    std::cout << "Enter size of array: ";
    std::cin >> size;
    int* created_arr = create_fillArr(size);
    printArrRecursive(created_arr, size);
    delete [] created_arr;
    created_arr = nullptr;
    return 0;
}

int* create_fillArr(size_t size)
{
    int* arr = new int[size];
    for(int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 100;
    }
    return arr;
}

void printArrRecursive(int* arr, size_t size)
{
    if(size == 0) { return; }
    --size;
    printArrRecursive(arr, size);
    std::cout << size << " index elements is " << arr[size] << std::endl;
}
