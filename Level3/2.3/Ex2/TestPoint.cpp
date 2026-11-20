/*
 * Objective:
 *   Test program for my Point class, run again after switching Distance()
 *   to a const reference. I make both points with the (x, y) constructor
 *   now.
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
    std::cout << "X: " << p.GetX() << ", Y: " << p.GetY() << std::endl;

    // Second point
    std::cout << "Enter x coordinate for second point: ";
    std::cin >> x;
    std::cout << "Enter y coordinate for second point: ";
    std::cin >> y;
    Point p2(x, y);

    std::cout << "Distance to origin: " << p.DistanceOrigin() << std::endl;
    // No copy of p2 this time, Distance() just gets a reference to it
    std::cout << "Distance between points: " << p.Distance(p2) << std::endl;

    return 0;
}
