/*4: Write an inline function Min(int,int) to calculate minimum between 
two numbers.*/


#include <iostream>

// Inline function to calculate the minimum of two integers
inline int Min(int a, int b) {
    // It takes two integers as input parameters (a and b) and returns the minimum of the two using the conditional (ternary) operator ? :.
    
}

int main() {
    int num1, num2;
    
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    int minimum =/*Call the Min function with the first and second number*/;

    std::cout << "The minimum between " << num1 << " and " << num2 << " is " << minimum << std::endl;

    return 0;
}
