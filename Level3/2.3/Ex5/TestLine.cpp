/*
 * Objective:
 *   Test program for my Line class. I read two points from the user, make a
 *   Line from them and print its description and length.
 */

#include <iostream>
#include "Point.hpp"
#include "Line.hpp"

int main()
{
    // Ask the user for the start point
    double x, y;
    std::cout << "Enter x coordinate for first point: ";
    std::cin >> x;
    std::cout << "Enter y coordinate for first point: ";
    std::cin >> y;
    Point p(x, y);

    // Then the end point
    std::cout << "Enter x coordinate for second point: ";
    std::cin >> x;
    std::cout << "Enter y coordinate for second point: ";
    std::cin >> y;
    Point p2(x, y);


    // Build the line from the two points and test it
    Line l(p, p2);
    std::cout << "Line: " << l.ToString() << std::endl;
    std::cout << "Length of line: " << l.Length() << std::endl;

    return 0;
}
