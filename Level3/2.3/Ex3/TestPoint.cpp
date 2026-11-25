/*
 * Objective:
 *   Test program for my Point class with the overloaded X(), Y() and
 *   Distance() functions.
 */


#include <iostream>
#include "Point.hpp"

int main()
{
    // Ask the user for the first point
    double x, y;
    std::cout << "Enter x coordinate: ";
    std::cin >> x;

    std::cout << "Enter y coordinate: ";
    std::cin >> y;

    // Make the point straight from the input with the (x, y) constructor
    Point p(x, y);
    std::cout << "Point: " << p.ToString() << std::endl;
    std::cout << "X: " << p.X() << ", Y: " << p.Y() << std::endl;

    // Second point
    std::cout << "Enter x coordinate for second point: ";
    std::cin >> x;
    std::cout << "Enter y coordinate for second point: ";
    std::cin >> y;
    Point p2(x, y);

    // Distance() with no argument is the distance to the origin
    std::cout << "Distance to origin: " << p.Distance() << std::endl;
    std::cout << "Distance between points: " << p.Distance(p2) << std::endl;

    return 0;
}
