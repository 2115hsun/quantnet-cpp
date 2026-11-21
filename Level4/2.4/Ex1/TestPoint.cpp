/*
 * Objective:
 *   Test program for Point, Line, and Circle classes and their operators. 
 *   Specifically the new Point operators (0, *, +, ==, =, *=) and the assignment operators for Line and Circle.
 */

#include <iostream>
#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"

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

    std::cout << std::boolalpha;

    // Point operator tests

    Point neg = -p;  // Unary minus operator test
    std::cout << "-p: " << neg.ToString() << std::endl;

    Point scale = p * 2;  // Multiplication operator test
    std::cout << "p * 2: " << scale.ToString() << std::endl;

    Point add = p + p2; // Additional operator test
    std::cout << "p + p2: " << add.ToString() << std::endl;

    bool equal = (p == p2); // Equally compare test
    std::cout << "p == p2: " << equal << std::endl;

    Point c; c=p; // Copy assignment test 
    std::cout << "c: " << c.ToString() << std::endl;

    Point assign = p = p; // Self-assignment test 
    std::cout << "assign: " << assign.ToString() << std::endl;

    Point change = p *= 2; // multiplication assignment test
    std::cout << "change: " << change.ToString() << std::endl;

    Point chain = c = p *= 2; // Chained assignment test
    std::cout << "chain: " << chain.ToString() << std::endl;

    // Line and Circle tests 
    
    Line l(p, p2); // Line constructor test
    std::cout << "Line: " << l.ToString() << std::endl;

    Line assignl = l = l; // Line assignment test
    std::cout << "assignl: " << assignl.ToString() << std::endl;

    Line l2;
    l2 = l; // Line copy assignment test
    std::cout << "l2: " << l2.ToString() << std::endl;

    Circle c1(p, 5); // Circle constructor test
    std::cout << "Circle: " << c1.ToString() << std::endl;

    Circle assignC = c1 = c1; // Circle assignment test
    std::cout << "assignC: " << assignC.ToString() << std::endl;

    Circle c2;
    c2 = c1; // Circle copy assignment test
    std::cout << "c2: " << c2.ToString() << std::endl;

    return 0;
}
