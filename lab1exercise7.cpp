/*6B: Write a template function sort()to sort elements of arrays 
in ascending order. Elements can be of type int, double, float, 
long, char.*/


#include <iostream>

// Template function to sort elements of an array in ascending order using Bubble Sort

//  Declares a template function with a single template parameter named T. 
// T is a placeholder for a data type, and the keyword typename is used here to indicate that T will represent a type.

void sort(/* Pass the array of type T */, size_t size) {
    for (size_t i = 0; i < size - 1; ++i) {
        for (size_t j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int intArr[] = {5, 2, 9, 1, 5};
    double doubleArr[] = {3.14, 1.0, 2.71, 0.5};
    char charArr[] = {'z', 'a', 'c', 'b'};
    size_t size;

    // Sort arrays of different data types
    size = sizeof(intArr) / sizeof(intArr[0]);
    sort(/*Call the function with the integer array*/, size);

    size = sizeof(doubleArr) / sizeof(doubleArr[0]);
    sort(/*Call the function with the double array*/, size);

    size = sizeof(charArr) / sizeof(charArr[0]);
    sort(/*Call the function with the character array*/, size);

    // Print sorted arrays
    for (size_t i = 0; i < size; ++i) {
        std::cout << intArr[i] << " ";
    }
    std::cout << std::endl;

    for (size_t i = 0; i < size; ++i) {
        std::cout << doubleArr[i] << " ";
    }
    std::cout << std::endl;

    for (size_t i = 0; i < size; ++i) {
        std::cout << charArr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
