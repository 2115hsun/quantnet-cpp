/*
 * Level 3 - 2.3 Exercise 5 (TestLine.cpp)
 * Test the Line class.
 *
 * Build: g++ -Wall -Wextra -std=c++17 Point.cpp Line.cpp TestLine.cpp -o main.exe
*/

#include <iostream>
#include "Point.hpp"
#include "Line.hpp"

int main()
{
    double x, y;
    std::cout << "Enter x coordinate for first point: ";
    std::cin >> x;
    std::cout << "Enter y coordinate for first point: ";
    std::cin >> y;
    Point p(x, y);

    std::cout << "Enter x coordinate for second point: ";
    std::cin >> x;
    std::cout << "Enter y coordinate for second point: ";
    std::cin >> y;
    Point p2(x, y);


    Line l(p, p2);
    std::cout << "Line: " << l.ToString() << std::endl;
    std::cout << "Length of line: " << l.Length() << std::endl;

    return 0;
}
