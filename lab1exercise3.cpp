/*Write a recursive function to check if a number is a prime 
number or not. A prime number is an integer that has no integral 
factor but itself and 1.*/

#include <iostream>

// Recursive function to check if a number is prime
bool isPrime(int n, int divisor) {
    if (n <= 1) {
         // Base case: Numbers less than or equal to 1 are not prime.
    } else if (divisor == 1) {
         // Base case: If divisor reaches 1, the number is prime.
    } else {
        if (n % divisor == 0) {
         // Number is divisible by some integer other than 1 and itself, not prime.
        } else {
        // Check the next divisor using recursion
        }
    }
}

int main() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Prime numbers are defined for positive integers only." << std::endl;
    } else {
        bool prime = isPrime(n, n - 1);
        if (prime) {
            std::cout << n << " is a prime number." << std::endl;
        } else {
            std::cout << n << " is not a prime number." << std::endl;
        }
    }

    return 0;
}
