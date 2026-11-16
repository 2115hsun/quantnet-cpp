/*
 * Level 3 - 2.3 Exercise 1 (TestPoint.cpp)
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

    Point p(x, y);
    std::cout << "Point: " << p.ToString() << std::endl;
    std::cout << "X: " << p.X() << ", Y: " << p.Y() << std::endl;

    std::cout << "Enter x coordinate for second point: ";
    std::cin >> x;
    std::cout << "Enter y coordinate for second point: ";
    std::cin >> y;
    Point p2(x, y);

    std::cout << "Distance to origin: " << p.Distance() << std::endl;
    std::cout << "Distance between points: " << p.Distance(p2) << std::endl;

    const Point cp(1.5, 3.9);
    // cp.X(0.3); // This line would cause a compilation error because cp is const
    std::cout<<cp.X()<<std::endl;
    std::cout << "Const Point: " << cp.ToString() << std::endl;
    std::cout << "X: " << cp.X() << ", Y: " << cp.Y() << std::endl;

    return 0;
}
