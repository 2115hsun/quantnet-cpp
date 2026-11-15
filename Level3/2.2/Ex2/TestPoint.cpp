/*
 * Level 3 - 2.2 Exercise 2 (TestPoint.cpp)
 * Extend the test program: print the distance to the origin and the
 * distance between two points.
 *
 * Build: g++ -Wall -Wextra -std=c++17 Point.cpp TestPoint.cpp -o main.exe
*/


#include <iostream>
#include "Point.hpp"

int main()
{
    double x, y;
    std::cout << "Enter x coordinate: ";
    std::cin >> x;

    std::cout << "Enter y coordinate: ";
    std::cin >> y;

    Point p;
    p.SetX(x);
    p.SetY(y);

    std::cout << "Point: " << p.ToString() << std::endl;
    std::cout << "X: " << p.GetX() << ", Y: " << p.GetY() << std::endl;

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
