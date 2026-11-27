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

// Yes. Point::ToString() and Line::ToString() call Shape::ToString() and
// append its "ID: ..." text, e.g. "ID: 18467 Point(10, 20)".
// The line also shows its two points' IDs, because it calls their ToString().

    std::cout << "Shape ID: " << s.ID() << std::endl; // ID of the shape
    std::cout << "Point ID: " << p.ID() << std::endl; // ID of the point, yes it does work. ID() is inherited from Shape
    std::cout << "Line ID: " << l.ID() << std::endl; // ID of the line, yes it does work too.

    Shape* sp; // Create pointer to shape variable 
    sp = &p; // Point in a shape variable. Yes, it is possible. A Point is a Shape, so a base-class pointer can point to it.
    std::cout << "Shape pointer points to: " << sp->ToString() << std::endl; // Shape pointer points to: ID: 18467

    // Create and copy Point p to new point.
    Point p2;
    p2 = p;
    std::cout << "Copied Point: " << p2 << ", ID: " << p2.ID() << std::endl; // with Shape::operator=(p) commented out in Point::operator=(), 
        //ID is not copied (15724 v. 18467) because a user-written operator= does not call the base version automatically.
    std::cout << "Original ID: " << p.ID() << std::endl;
    return 0;
}
