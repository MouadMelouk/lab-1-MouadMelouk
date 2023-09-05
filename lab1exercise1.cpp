/*Write a program that dynamically resize an array to a bigger size. The program creates 
an array of an arbitrary size (specified by the user). Then the user may extend the array 
to a bigger size (this involves creating a temporary array with larger size, copying the 
values of the elements, and adding new values into the extension cells). Print the new 
array to the user to confirm the functionality.*/

#include <iostream>

int* resizeArray(int* oldArray, int oldSize, int newSize) {
    // (1) Allocate memory for the initial array with the name newArray with the specified newSize
    
   
    for (int i = 0; i < oldSize; ++i) {
         // (2) Copy elements from the old array to the new array
    }

    // Initialize new elements in the extended part of the array
    for (int i = oldSize; i < newSize; ++i) {
        std::cout << "Enter a new value for element " << i << ": ";
        std::cin >> newArray[i];
    }

    // (3) Deallocate memory for the old array

    return newArray;
}

int main() {
    int* array = nullptr;
    int size, newSize;

    std::cout << "Enter the initial size of the array: ";
    std::cin >> size;

    // (4) Allocate memory for the initial array with the size inputted by the user

    std::cout << "Enter values for the initial array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i << ": ";
        std::cin >> array[i];
    }

    std::cout << "Enter the new size of the array (must be greater than the current size): ";
    std::cin >> newSize;

    if (newSize <= size) {
        std::cout << "New size must be greater than the current size." << std::endl;
    } else {
        int* resizedArray = resizeArray(array, size, newSize);

        std::cout << "Array after resizing to size " << newSize << ":" << std::endl;
        for (int i = 0; i < newSize; ++i) {
            std::cout << "Element " << i << ": " << resizedArray[i] << std::endl;
        }

        // (5) Deallocate memory for the resized array
    }

    return 0;
}

