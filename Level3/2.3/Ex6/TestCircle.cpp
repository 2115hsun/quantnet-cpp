/*
 * Objective: Implement a Circle class that uses the Point class to represent the centre of the circle. 
 * The Circle class should have a radius and provide methods to calculate the diameter, area, and circumference of the circle. 
 * Additionally, implement a method to return a string representation of the circle's properties.
*/

#include <iostream>
#include "Point.hpp"
#include "Circle.hpp"

int main()
{
    double x, y, radius; // Variables to hold user input for the centre point and radius
    std::cout << "Enter x coordinate for centre point: ";
    std::cin >> x;
    std::cout << "Enter y coordinate for centre point: ";
    std::cin >> y;
    std::cout << "Enter radius: ";
    std::cin >> radius;

    Circle c(Point(x, y), radius); // Create a Circle object using the user input
    std::cout << "Circle: " << c.ToString() << std::endl;

    std::cout << c.ToString() << std::endl;
    std::cout << "Diameter: " << c.Diameter() << std::endl;
    std::cout << "Area: " << c.Area() << std::endl;
    std::cout << "Circumference: " << c.Circumference() << std::endl;

    return 0;
}
