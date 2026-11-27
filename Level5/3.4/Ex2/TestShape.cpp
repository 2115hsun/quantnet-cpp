/*
 * Objective:
 *   Test program for the Shape hierarchy, with the code from the
 *   assignment and my answers to its questions.
 */

#include <iostream>
#include "Shape.hpp"
#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"

int main()
{
    using namespace Dave::CAD;
    Shape s;
    Point p(10, 20);
    Line l(Point(1, 2), Point(3, 4));

    std::cout << s.ToString() << std::endl;
    std::cout << p.ToString() << std::endl;
    std::cout << l.ToString() << std::endl;

    std::cout << "Shape ID: " << s.ID() << std::endl;
    std::cout << "Point ID: " << p.ID() << std::endl;
    std::cout << "Line ID: " << l.ID() << std::endl;

    Shape* sp;
    sp = &p;
    std::cout << "Shape pointer points to: " << sp->ToString() << std::endl;

    // Create and copy Point p to new point.
    Point p2;
    p2 = p;
    std::cout << "Copied Point: " << p2 << ", ID: " << p2.ID() << std::endl;
    std::cout << "Original ID: " << p.ID() << std::endl;
    return 0;
}
