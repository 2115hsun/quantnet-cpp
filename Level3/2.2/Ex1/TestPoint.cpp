/*
 * Objective:
 *   Test program for my Point class. I read x and y with std::cin, make a
 *   Point with the default constructor, set the coordinates with the
 *   setters, then print ToString() and the values from the getters.
 */

#include <iostream>
#include "Point.hpp"

int main()
{
    // Ask the user for the coordinates
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

    return 0;
}
