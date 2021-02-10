#include <iostream>

int* createFillArray(size_t size);

void printArr(int* arr, size_t size);

void deleteArrElem(int* &arr, size_t key, size_t size);

int main()
{
    size_t size = 0;
    std::cout << "Enter size of array: ";
    std::cin >> size;
    int* created_array = createFillArray(size);
    printArr(created_array, size);
    size_t key = 0;
    std::cout << "Enter index that you want to delete: \n";
    std::cin >> key;
    deleteArrElem(created_array, key, size);
    delete [] created_array;
    created_array = nullptr;
    return 0;
}

int* createFillArray(size_t size)
{
    int* arr = new int[size];
    for(int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 50;
    }
    return arr;
}

void printArr(int* arr, size_t size)
{
    std::cout << "Array" << std::endl;
    for(int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void deleteArrElem(int* &arr, size_t key, size_t size)
{
    if((size < key) || (key < 0))
    {
        std::cout << "Don't exist such index! \n";
        return;
    }
    int* tmp = new int[size - 1];
    for(int i = 0, j = 0; i < size; ++i)
    {
        if(key == i){ continue; }
        tmp[j] = arr[i];
        ++j;
    }
    delete [] arr;
    arr = nullptr;
    arr = tmp;
    printArr(arr, size - 1);
}
