# Lab-1-Template
Template Repository for OOPNYUAD Lab 1 for Students to Fill Code
## Exercise 1: Dynamic Array Resizing Exercise

### Aim
The aim of this exercise is to create a C++ program that allows users to dynamically resize an array to a bigger size. This involves creating a temporary array with a larger size, copying the values of the elements from the old array to the new array, and adding new values into the extension cells. The program demonstrates how to work with dynamic arrays and user input.

### Sample Input and Output

Below is a sample interaction with the program, including input and output:

```
Enter the initial size of the array: 3
Enter values for the initial array:
Element 0: 10
Element 1: 20
Element 2: 30
Enter the new size of the array (must be greater than the current size): 5
Element 3: 40
Element 4: 50

Array after resizing to size 5:
Element 0: 10
Element 1: 20
Element 2: 30
Element 3: 40
Element 4: 50
```

### Explanation

1. The program starts by asking the user for the initial size of the array. In this example, the user enters 3.

2. The user is then prompted to enter values for the initial array. In this case, the user enters 10, 20, and 30 as values for the initial elements.

3. Next, the program asks the user for the new size of the array. The user must enter a size greater than the current size, which is 3 in this case. The user enters 5 as the new size.

4. The program dynamically resizes the array to size 5, preserving the original elements (10, 20, 30) and prompting the user to enter new values (40 and 50) for the additional elements.

5. Finally, the program prints the resized array, showing the original and newly added elements, to confirm that the resizing operation was successful.

This exercise helps users understand dynamic memory allocation and resizing arrays based on user input, which is a fundamental concept in C++ programming.

## Exercise 2: Factorial Calculator

### Description
This C++ program calculates the factorial of a non-negative integer using a recursive function. The program defines the factorial of a number `n` according to the following rules:

- `fact(n) = 1` when `n` is 0 or 1.
- `fact(n) = n * fact(n - 1)` when `n` is greater than 1.

The user is prompted to enter a non-negative integer, and the program calculates and displays the factorial of the entered number.


### Sample Input and Output
#### Sample Input:
```
Enter a non-negative integer: 5
```

#### Sample Output:
```
Factorial of 5 is 120
```

## Exercise 3: Prime Number Checker

### Description
This C++ program checks whether a given positive integer is a prime number or not. A prime number is defined as an integer that has no integral factors other than 1 and itself.

The program uses a recursive function to check for primality by attempting to divide the number by all positive integers less than itself. If the number is divisible by any integer other than 1 and itself, it is not prime.


### Sample Input and Output
#### Sample Input:
```
Enter a positive integer: 17
```

#### Sample Output:
```
17 is a prime number.
```

#### Sample Input:
```
Enter a positive integer: 6
```

#### Sample Output:
```
6 is not a prime number.
```

#### Sample Input:
```
Enter a positive integer: -1
```

#### Sample Output:
```
Prime numbers are defined for positive integers only.
```

## Exercise 4: Minimum Number Calculator

### Description
This C++ exercise focuses on writing an inline function called `Min` to calculate the minimum between two numbers. The program allows the user to input two integers and then uses the `Min` function to determine and display the minimum of the two values.


### Sample Input and Output
#### Sample Input:
```
Enter the first number: 8
Enter the second number: 4
```

#### Sample Output:
```
The minimum between 8 and 4 is 4
```

#### Sample Input:
```
Enter the first number: -5
Enter the second number: 2
```

#### Sample Output:
```
The minimum between -5 and 2 is -5
```
## Exercise 5: Volume Calculator

### Description
This C++ program implements an overloaded function called `Volume` to calculate the volume of three different geometric shapes: a cube, a cylinder, and a cuboid. The program provides functions for each shape, allowing the user to input the necessary parameters (side length, radius, height, width, length, and height) to calculate the volume. The formulas for volume calculation are as follows:

- **Volume of Cube:** `side ^ 3`
- **Volume of Cylinder:** `π * radius^2 * height`
- **Volume of Cuboid:** `width * length * height`

The program utilizes the value of π (pi) from the `<cmath>` library.
Each function takes the required parameters for the specific shape and returns the calculated volume.

### Sample Input and Output
#### Sample Input:
```
Enter the side length of the cube: 5
Enter the radius of the cylinder: 2
Enter the height of the cylinder: 4
Enter the width of the cuboid: 3
Enter the length of the cuboid: 4
Enter the height of the cuboid: 5
```

#### Sample Output:
```
Volume of the cube: 125
Volume of the cylinder: 50.2655
Volume of the cuboid: 60
```

## Exercise 6: Array Element Addition

### Description
This C++ program demonstrates the use of a template function called `add` to add elements of one array to the elements of another. The `add` function is designed to work with arrays of various types and sizes, as long as the two arrays have the same data type and size.


### Sample Input and Output
#### Sample Input:
No user input is required for this program. Sample values are provided for `arr1` and `arr2`.

#### Sample Output:
```
11 22 33 44 55
```

In this output, the elements of `arr1` have been modified by adding the corresponding elements from `arr2`. The modified `arr1` is printed to the console.

## Exercise 7: Array Sorting

### Description
This C++ program demonstrates the use of a template function called `sort` to sort elements of arrays in ascending order. The `sort` function can be used with arrays of various data types, including `int`, `double`, `float`, `long`, and `char`. It employs the Bubble Sort algorithm to arrange the elements in ascending order.

The `sort` function takes an array of type `T` and its size as parameters. It sorts the elements of the array in ascending order.

### Sample Input and Output
#### Sample Output:
```
Sorted int array: 1 2 5 5 9
Sorted double array: 0.5 1 2.71 3.14
Sorted char array: a b c z
```

In this output, the elements of the arrays have been sorted in ascending order using the `sort` function for different data types.

## Exercise 8: Geometric Shape Area Calculator

### Description
This C++ program demonstrates the use of namespaces to organize functions for calculating the areas of different geometric shapes, specifically rectangles and triangles. The program creates two separate namespaces: one for rectangles and one for triangles. Each namespace contains a function named `calculateArea` for computing the area of the respective geometric shape based on the namespace used to call the function.
The program defines two separate namespaces: `Rectangle` and `Triangle`. Each namespace contains a `calculateArea` function for computing the area of the corresponding shape.

### Sample Input and Output
#### Sample Output:
```
Area of Rectangle: 12
Area of Triangle: 15
```

In this output, the program uses the appropriate namespace to calculate and display the areas of a rectangle and a triangle.
Here's a README.md section for the modified code:

## Exercise 9: Nested Namespace for Shape Areas

### Description
This C++ program demonstrates the use of nested namespaces to organize functions for calculating the areas of different geometric shapes. Specifically, the program creates two nested namespaces: `shape::Rectangle` and `shape::Triangle`. These namespaces contain functions for calculating the area of a rectangle and a triangle, respectively.

### Sample Input and Output
#### Sample Output:
```
Area of Rectangle: 12
Area of Triangle: 15
```

In this output, the program uses the functions from the nested namespaces to calculate and display the areas of a rectangle and a triangle.
