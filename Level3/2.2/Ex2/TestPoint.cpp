/*
 * Objective:
 *   Test program for my Point class. I read two points from the user and
 *   print the first one's distance to the origin and the distance between
 *   the two.
 *
 * Changes from previous version (2.2 Exercise 1):
 *   - Read a second point.
 *   - Print DistanceOrigin() and Distance().
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

    // Default constructor first, then the setters fill in the values
    Point p;
    p.SetX(x);
    p.SetY(y);

    std::cout << "Point: " << p.ToString() << std::endl;
    std::cout << "X: " << p.GetX() << ", Y: " << p.GetY() << std::endl;

    // Second point, made the same way
    Point p2;
    std::cout << "Enter x coordinate for second point: ";
    std::cin >> x;
    std::cout << "Enter y coordinate for second point: ";
    std::cin >> y;
    p2.SetX(x);
    p2.SetY(y);

    std::cout << "Distance to origin: " << p.DistanceOrigin() << std::endl;
    std::cout << "Distance between points: " << p.Distance(p2) << std::endl;

    return 0;
}
