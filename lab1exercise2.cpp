#include <iostream>

/*Write a recursive function to compute factorial of a number. 
Factorial of a number n is defined as: 

    fact(n) = 1                 , n = 1 || n = 0
    fact(n) = n * fact(n - 1)   , n > 1

*/

// Recursive function to compute factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        // Fill appropriately
    } else {
        // Fill appropriately with a recursive cae
    }
}

int main() {
    int n;
    std::cout << "Enter a non-negative integer: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
    } else {
        int result = factorial(n);
        std::cout << "Factorial of " << n << " is " << result << std::endl;
    }

    return 0;
}
