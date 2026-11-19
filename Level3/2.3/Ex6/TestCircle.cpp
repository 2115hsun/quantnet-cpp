/*
 * Objective:
 *   Test program for my Circle class. I read a centre point and a radius
 *   from the user, make a Circle and print its description, diameter, area
 *   and circumference.
 */

#include <iostream>
#include "Point.hpp"
#include "Circle.hpp"

int main()
{
    // Ask the user for the centre point and the radius
    double x, y, radius;
    std::cout << "Enter x coordinate for centre point: ";
    std::cin >> x;
    std::cout << "Enter y coordinate for centre point: ";
    std::cin >> y;
    std::cout << "Enter radius: ";
    std::cin >> radius;

    Circle c(Point(x, y), radius); // Build the circle straight from the input
    std::cout << "Circle: " << c.ToString() << std::endl;

    std::cout << c.ToString() << std::endl;
    std::cout << "Diameter: " << c.Diameter() << std::endl;
    std::cout << "Area: " << c.Area() << std::endl;
    std::cout << "Circumference: " << c.Circumference() << std::endl;

    return 0;
}
