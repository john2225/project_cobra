#include<iostream>
// print array elements
void PrintArr(int* addr, int size)
{
    for (int i = 0; i < size; ++i) {
        std::cout << addr[size - 1 - i];
    }
    std::cout << std::endl;
}

//size of elements
int SizeofNum(int num)
{
    size_t size = 0;
    
    while(num != 0)
    {
        ++size;
        num /= 10;
    }
    return size;
}
// fill elements into array
int* Int2Arr(int num, int& inSize)
{
    inSize = SizeofNum(num);
    int* arr = new int[inSize];
    for(int i = 0; i < inSize; ++i)
    {
        arr[i] = num % 10;
        num /= 10;
    }
    return arr;
}
// summary of two array elements
int* SumofArrs(int* arg1, int arg1Size, int* arg2, int arg2Size, int& resultSize)
{
    if(arg1Size >= arg2Size) {
        resultSize = arg1Size + 1;
    }
    else {
        resultSize = arg2Size + 1;
    }
    
    int* largeArr = new int[resultSize];
    
    for(int i = 0; i < resultSize; ++i) {
        largeArr[i] += (arg1[i] + arg2[i]) % 10;
        largeArr[i + 1] += (arg1[i] + arg2[i]) / 10;
    }
    return largeArr;
}



int main()
{
    int arg1;
    std::cout << "Enter first array elements: ";
    std::cin >> arg1;
    // size of array elements
    int arg1ArrSize;
    int* arg1Arr = Int2Arr(arg1, arg1ArrSize);
    
    
    int arg2;
    std::cout << "Enter second array elements: ";
    std::cin >> arg2;
    // size of array elements
    int arg2ArrSize;
    int* arg2Arr = Int2Arr(arg2, arg2ArrSize);

    PrintArr(arg1Arr, arg1ArrSize);
    PrintArr(arg2Arr, arg2ArrSize);
    
    int resultSize;
    int* result = SumofArrs(arg1Arr, arg1ArrSize, arg2Arr, arg2ArrSize, resultSize);
    std:: cout << "Sum of array elements is: ";
    PrintArr(result, resultSize);
    delete [] arg1Arr;
    delete [] arg2Arr;
    delete [] result;
}

