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
    Shape* shapes[3];
    shapes[0] = new Shape;
    shapes[1] = new Point;
    shapes[2] = new Line; 

    for (int i = 0; i < 3; ++i) {
        delete shapes[i];
    }
}
