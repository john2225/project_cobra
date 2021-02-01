#include <iostream>
// Fill and print array with random values
int* fill_array(size_t size) {
    int* arr = new int[size];
    for(int i = 0; i < size; ++i) {
        arr[i] = rand() % 50;
        std::cout << i << "\t index element is: " << arr[i] << std::endl;
    }
    return arr;
}

// Find index of minimum value
int min_index(int* arr, size_t size) {
    size_t min = 0;
    for(int i = 1; i < size; ++i) {
        if(arr[min] > arr[i]){
            min = i;
        }
    }
    return min;
}

int main() {
    size_t size;
    std::cout << "Enter size of array: ";
    std::cin >> size;
    int* arr = fill_array(size);
    int index = min_index(arr, size);
    std::cout << "Index of minimum value is: " << index << std::endl;
    delete [] arr;
    return 0;
}
