/*
 * Objective:
 *   Test program that reaches my classes through their namespaces: the
 *   full name for Point, a using declaration for Line, a using directive
 *   for Containers, and a shorter alias for Dave::CAD for Circle.
 */

#include <iostream>
#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include "Array.hpp"


int main()
{
    // --------------- Full namespace name for Point -------------------
    Dave::CAD::Point p1(1.0, 2.0);
    std::cout << "Point: " << p1 << std::endl;

    //  -------------- Using declaration for Line -------------------
    using Dave::CAD::Line;
    Line l(p1, Dave::CAD::Point(3.0, 4.0));
    std::cout << "Line: " << l << std::endl;

    
    //  -------------- Using directive for Containers -------------------
    using namespace Dave::Containers;
    Array arr(5);
    std::cout << "Array size: " << arr.Size() << std::endl;


    // -------------- Namespace alias for Dave::CAD, used for Circle -------------------
    namespace CAD = Dave::CAD;
    CAD::Circle c(p1, 5.0);
    std::cout << "Circle: " << c << std::endl;

    return 0;
}
