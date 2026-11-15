/*
 * Level 3 - 2.2 Exercise 1 (TestPoint.cpp)
 * Read x and y with std::cin, create a Point with the default
 * constructor, set the coordinates with the setters, then print
 * ToString() and the coordinates from the getters.
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

    return 0;
}
