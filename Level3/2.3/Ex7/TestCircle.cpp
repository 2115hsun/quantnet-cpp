/*
 * Objective:
 *   Test program for the inline getters and setters in my Point class,
 *   followed by the same Circle test as Exercise 6.
 */

#include <iostream>
#include "Point.hpp"
#include "Circle.hpp"

int main()
{
    // Inline test: make a point, change it with the setters, read it back
    Point p(3.0, 4.0); // Start at (3, 4)
    p.X(5.0); // Inline setter, x is now 5
    p.Y(6.0); // Inline setter, y is now 6
    std::cout << "Point: " << p.ToString() << std::endl;
    std::cout << "X: " << p.X() << ", Y: " << p.Y() << std::endl; // Inline getters

    // Ask the user for the centre point and the radius
    double x, y, radius;
    std::cout << "Enter x coordinate for centre point: ";
    std::cin >> x;
    std::cout << "Enter y coordinate for centre point: ";
    std::cin >> y;
    std::cout << "Enter radius: ";
    std::cin >> radius;

    Circle c(Point(x, y), radius); // Build the circle straight from the input

    std::cout << c.ToString() << std::endl;
    std::cout << "Diameter: " << c.Diameter() << std::endl;
    std::cout << "Area: " << c.Area() << std::endl;
    std::cout << "Circumference: " << c.Circumference() << std::endl;

    return 0;
}
