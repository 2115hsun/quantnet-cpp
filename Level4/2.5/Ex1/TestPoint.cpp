/*
 * Objective:
 *   Until now, we created objects on the stack, which is limited in size when creating many objects.
 *   This test program will explore creating objects on the heap using dynamic memory allocation.
 */

#include <iostream>
#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"

int main()
{
    Point* p1 = new Point(); // Create a default Point on the heap
    Point* p2 = new Point(1.0, 2.0); // Create a Point on the heap
    Point* p3 = new Point(*p1);

    std::cout << "Default Point: " << *p1 << std::endl;
    std::cout << "Point with coordinates: " << *p2 << std::endl;
    std::cout << "Copied Point: " << *p3 << std::endl;
    std::cout << "Distance from p2 to origin: " << p2->Distance() << std::endl;
    std::cout << "Distance from p1 to p2: " << p1->Distance(*p2) << std::endl;
    
    delete p1; // Free the memory allocated for the default Point
    delete p2; // Free the memory allocated for the Point with coordinates
    delete p3; // Free the memory allocated for the copied Point

    Line* l = new Line(Point(0, 0), Point(3, 4)); // Create a Line on the heap
    std::cout << "Line: " << *l << std::endl;

    delete l; // Free the memory allocated for the Line

    Circle* c = new Circle(Point(0, 0), 5.0); // Create a Circle on the heap
    std::cout << "Circle: " << *c << std::endl;

    delete c; // Free the memory allocated for the Circle

    return 0;
}
