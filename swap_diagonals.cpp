#include <iostream>
//create two demonsioal array
int** createDimensionArray(size_t size)
{
    int** dim_arr = new int* [size];
    for(int i = 0; i < size; ++i)
    {
        dim_arr[i] = new int[size];
    }
    return dim_arr;
}

//delete demonsional array
void deleteDimensionArray(int** &del_arr, size_t size)
{
    for(int i = 0; i < size; ++i)
    {
        delete [] del_arr[i];
    }
    delete [] del_arr;
    del_arr = nullptr;
}

void fillArray(int** arr, size_t size)
{
    for(int i = 0; i < size; ++i)
    {
        for(int j = 0; j < size; ++j)
        {
            arr[i][j] = rand() % 20;
        }
    }
}

// print dimensional array
void printArr(int** arr, size_t size)
{
    for(int i = 0; i < size; ++i)
    {
        for(int j = 0; j < size; ++j)
        {
            if(arr[i][j] < 10)
            {
            std::cout << arr[i][j] << "  ";
            }else
            {
                std::cout << arr[i][j] << " ";
            }
        }
        std::cout << std::endl;
    }
}

void SwapDiagonals(int** swap_arr, size_t size)
{
    int tmp = 0;
    std::cout << "Swaped diagonals" << std::endl;
    for(int i = 0; i < size; ++i)
    {
        tmp = swap_arr[i][i];
        swap_arr[i][i] = swap_arr[size - i - 1][i];
        swap_arr[size - i - 1][i] = tmp;
    }
    printArr(swap_arr, size);
}

int main()
{
    size_t size;
    std::cout << "Enter size of dimensional matrix: ";
    std::cin >> size;
    int** arr = createDimensionArray(size);
    fillArray(arr, size);
    std::cout << "Two dimensional matrix" << std::endl;
    printArr(arr, size);
    SwapDiagonals(arr, size);
    deleteDimensionArray(arr, size);
}


