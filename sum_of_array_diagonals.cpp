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
    std::cout << "Two dimensional matrix" << std::endl;
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
int MainDiagonal(int** arr, size_t size)
{   int sum_main = 0;
    std::cout << "Main diagonal" << std::endl;
    for(int i = 0; i < size; ++i)
    {   std::cout << arr[i][i] << " ";
        sum_main += arr[i][i];
    }
    std::cout << std::endl;
    return sum_main;
}

int AuxiliaryDiagonal(int** arr, size_t size)
{   int sum_auxiliary = 0;
    std::cout << "Auxiliary diagonal" <<std:: endl;
    for(int i = 0; i < size; ++i) {
        std::cout << arr[size - i - 1][i] << " ";
        sum_auxiliary += arr[size - i - 1][i];
    }
    std::cout << std::endl;
    return sum_auxiliary;
}

int SumOfDiagonals(int** diagonal_arr, size_t size)
{
    int main_diagonal = MainDiagonal(diagonal_arr, size);
    int auxiliary_diagonal = AuxiliaryDiagonal(diagonal_arr, size);
    int sum_of_diagonals = main_diagonal + auxiliary_diagonal;
    return sum_of_diagonals;
}

int main()
{
    size_t size;
    std::cout << "Enter size of dimensional matrix: ";
    std::cin >> size;
    int** arr = createDimensionArray(size);
    fillArray(arr, size);
    printArr(arr, size);
    int result_of_diagonals_sum = SumOfDiagonals(arr, size);
    std::cout << "Sum of diagonals is: "  << result_of_diagonals_sum << std::endl;
    
    deleteDimensionArray(arr, size);
}

