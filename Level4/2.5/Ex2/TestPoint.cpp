/*
 * Objective:
 *   This test program is creating objects on the heap instead of stack. 
 *   - Creates Points with new using the default, (x, y), and copy constructors.
 *   - Reads an array size from the user input and creates an array of Points on the heap with new[].
 *   - Frees the memory allocated on the heap using delete and delete[].
 *   - Shows that a stack array can't have a run-time size in standard C++. 
 */

#include <iostream>
#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"

int main()
{
    // Part A: Creating Points on the heap using different constructors
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


    // Part B: Heap array of Points with run-time size
    int size;
    std::cout << "Enter array size: ";
    std::cin >> size;

    // Point stackPoint[size]; 
    // Standard C++ does not allow this, because a stack arraw's size must be known at compile time. 
    // GCC accepts it as non-standard extension; with -pedantic-errors stating "ISO C++ forbids variable length array 'stackPoint'"

    Point* points = new Point[size]; // new Point [size] can only use the default constructor; 
    for (int i = 0; i < size; ++i) 
    {
        points[i] = Point(i, i); // Initialize each Point in the array
        std::cout << "points[" << i << "]: " << points[i] << std::endl;
    }
    delete[] points; // Free the memory allocated for the array of Points on the heap
    return 0;
}
