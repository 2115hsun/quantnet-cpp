/*
 * Objective:
 *   Test program for my Point class, plus a test with a const Point.
 *
 * Changes from previous version (2.3 Exercise 3):
 *   - Added a const Point cp(1.5, 3.9) and tried to change it and read it.
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

    // Const point test. Only const functions can be called on cp
    const Point cp(1.5, 3.9);
    // cp.X(0.3); // Doesn't compile: the setter would change a const object
    std::cout<<cp.X()<<std::endl; // Fine, X() is a const getter
    std::cout << "Const Point: " << cp.ToString() << std::endl;
    std::cout << "X: " << cp.X() << ", Y: " << cp.Y() << std::endl;

    return 0;
}
