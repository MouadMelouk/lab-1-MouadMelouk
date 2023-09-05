/* Modify code from exercise 8 to create nested namespaces for each 
shape inside a parent namespace called shape. Calculate area of 
rectangle and triangle via nested namespace to verify results.*/

#include <iostream>

namespace Shape {
    // Namespace for Rectangle
    namespace Rectangle {
        double calculateArea(double length, double width) {
            return length * width;
        }
    }

    // Namespace for Triangle
    namespace Triangle {
        double calculateArea(double base, double height) {
            return 0.5 * base * height;
        }
    }

}

int main() {
    double rectangleArea = Shape::Rectangle::calculateArea(4.0, 3.0);
    double triangleArea = Shape::Triangle::calculateArea(5.0, 6.0);

    std::cout << "Area of Rectangle: " << rectangleArea << std::endl;
    std::cout << "Area of Triangle: " << triangleArea << std::endl;

    return 0;
}
