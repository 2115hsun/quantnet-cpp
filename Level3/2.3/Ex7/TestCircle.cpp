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
    Point p(3.0, 4.0); // Create a Point object with x=3.0 and y=4.
    p.X(5.0); // Set the x coordinate to 5.0
    p.Y(6.0); // Set the y coordinate to 6.0
    std::cout << "Point: " << p.ToString() << std::endl; // Print the point's coordinates
    std::cout << "X: " << p.X() << ", Y: " << p.Y() << std::endl; // Print the x and y coordinates
    
    double x, y, radius; // Variables to hold user input for the centre point and radius
    std::cout << "Enter x coordinate for centre point: ";
    std::cin >> x;
    std::cout << "Enter y coordinate for centre point: ";
    std::cin >> y;
    std::cout << "Enter radius: ";
    std::cin >> radius;

    Circle c(Point(x, y), radius); // Create a Circle object using the user input

    std::cout << c.ToString() << std::endl;
    std::cout << "Diameter: " << c.Diameter() << std::endl;
    std::cout << "Area: " << c.Area() << std::endl;
    std::cout << "Circumference: " << c.Circumference() << std::endl;

    return 0;
}
