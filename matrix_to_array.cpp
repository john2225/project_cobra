#include <iostream>
int** CreateMatrixArr(size_t size)
{
    int** arr = new int* [size];
    for(int i = 0; i < size; ++i)
    {
        arr[i] = new int[size];
    }
    return arr;
}

void FillMatrixArr(int** arr, size_t size)
{
    for(int i = 0; i < size; ++i)
    {
        for(int j = 0; j < size; ++j)
        {
            arr[i][j] = rand() % 30;
        }
    }
}

void PrintMatrixArr(int** arr, size_t size)
{
    std::cout << "Matrix" << std::endl;
    for(int i = 0; i < size; ++i)
        {
        for(int j = 0; j < size; ++j)
        {
            if(arr[i][j] < 10)
            {
                std::cout << arr[i][j] << "  ";
            }
            else
            {
                std::cout << arr[i][j] << " ";
            }
        }
        std::cout << std::endl;
    }
}


void DeleteMatrixArr(int** arr, size_t size)
{
    for(int i = 0; i < size; ++i)
    {
        delete [] arr[i];
    }
    delete [] arr;
    arr = nullptr;
}

int* MatrixToArr(int** arr, size_t size)
{
    size_t large_size = size * size;
    int* tmp = new int[large_size];
    for(int i = 0; i < size; ++i)
    {
        for(int j = 0; j < size; ++j)
        {
            tmp[(i* size) + j] = arr[i][j];
        }
        
    }
    DeleteMatrixArr(arr, size);
    return tmp;
}
void PrintArr(int* arr, size_t size)
{   size *= size;
    std::cout << "Array" << std::endl;
    for(int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}


int main()
{
    size_t size;
    std::cout << "Enter size of matrix: ";
    std::cin >> size;
    int** matrix_arr = CreateMatrixArr(size);
    FillMatrixArr(matrix_arr, size);
    PrintMatrixArr(matrix_arr, size);
    int* arr = MatrixToArr(matrix_arr, size);
    PrintArr(arr, size);
    delete [] arr;
    arr = nullptr;
    return 0;
}
