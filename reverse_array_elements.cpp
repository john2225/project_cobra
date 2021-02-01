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

int* reverse_elements(int* arr, size_t size) {
    for(int i = 0; i < size / 2; ++i) {
        int tmp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = tmp;
    }
    return arr;
}

void print_arr(int* arr, size_t size) {
    std::cout << "Reversed array: ";
    for(int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    size_t size;
    std::cout << "Enter size of array: ";
    std::cin >> size;
    int* arr = fill_array(size);
    arr = reverse_elements(arr, size);
    print_arr(arr, size);
    delete [] arr;
    return 0;
}


