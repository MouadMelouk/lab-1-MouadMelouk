/*6: Write a template function add() to add elements of one array 
to the elements of another; for example add(arr1,arr2) should do 
arr1[i] += arr2[i] for each element of arr1.

This template function allows you to add elements of arrays of various
 types and sizes as long as the two arrays have the same type and size.*/

 #include <iostream>


//  Declares a template function with two template parameters:
//      - typename T: This parameter represents a placeholder for a data type. The add function can work with arrays of any data type T.
//      - size_t N: This parameter represents the size of the arrays. It specifies that the arrays arr1 and arr2 must have the same size N.

void add(/*The parameters of the add function should be a reference to an array of type T with size N, and
 a reference to a constant array of type T with size N.. */) {
    for (size_t i = 0; i < N; ++i) {
        arr1[i] += arr2[i];
    }
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {10, 20, 30, 40, 50};
    
    // Call the add function to add elements of arr2 to arr1
    add(arr1, arr2);

    // Print the modified arr1
    for (size_t i = 0; i < sizeof(arr1) / sizeof(arr1[0]); ++i) {
        std::cout << arr1[i] << " ";
    }

    return 0;
}
