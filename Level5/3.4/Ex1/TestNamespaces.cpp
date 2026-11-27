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
    Dave::CAD::Line l;
    return 0;
}

// Assigning in the constructor body:  4 constructors, 2 assignments, 4 destructors
// Colon syntax (initializer list):    2 constructors, 0 assignments, 2 destructors
// Without the colon syntax, members are first default-constructed, then
// assigned from temporaries. The colon syntax builds them once, directly.