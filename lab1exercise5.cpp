/*5B: Write an overloaded function Volume() to calculate volume of 
a cube, volume of a cylinder and volume of a cuboid

    - Volume of cube: side ^ 3
    - Volume of cylinder: pi * r^2 * h
    - Volume of cuboid: width * length * height

*/

#include <iostream>
#include <cmath>

const double PI = 3.141592653589793;

// Function to calculate the volume of a cube
double Volume(double side) {
    // return the volume of the cube
    return pow( side , 3 );
}

// Function to calculate the volume of a cylinder
double Volume(double radius, double height) {
    // return the volume of the cylinder;
    return PI * pow( radius , 2 ) * height;
}

// Function to calculate the volume of a cuboid
double Volume(double width, double length, double height) {
    // return the volume of the cuboid
    return width * length * height;
}

int main() {
    double volume;

    // Calculate the volume of a cube
    volume =  Volume(5.0) ;             // Example: Cube with side length 5
    std::cout << "Volume of the cube: " << volume << std::endl;

    // Calculate the volume of a cylinder
    volume = Volume(2.0 , 4.0) ;        // Example: Cylinder with radius 2 and height 4
    std::cout << "Volume of the cylinder: " << volume << std::endl;

    // Calculate the volume of a cuboid
    volume =  Volume(3.0, 4.0, 5.0) ;   // Example: Cuboid with width 3, length 4, and height 5
    std::cout << "Volume of the cuboid: " << volume << std::endl;

    return 0;
}
