/* Create two namespaces for two different geometrical shapes 
Rectangle and Triangle. Create function named calculateArea() to 
calculate area of respective geometrical shape based on the 
namespace used to call the function.*/

#include <iostream>

// Namespace for Rectangle
/*Declare the namespace for the appropriate below Area Calculation*/ {
    double calculateArea(double length, double width) {
        return length * width;
    }
}

// Namespace for Triangle
/*Declare the namespace for the appropriate below Area Calculation*/ {
    double calculateArea(double base, double height) {
        return 0.5 * base * height;
    }
}

int main() {
    double rectangleArea = /*Call the function with the appropriate Namespace*/calculateArea(4.0, 3.0);
    double triangleArea = /*Call the function with the appropriate Namespace*/calculateArea(5.0, 6.0);

    std::cout << "Area of Rectangle: " << rectangleArea << std::endl;
    std::cout << "Area of Triangle: " << triangleArea << std::endl;

    return 0;
}
