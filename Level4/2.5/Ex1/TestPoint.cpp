/*
 * Objective:
 *   This test program is creating objects on the heap instead of stack. 
 *   - Create an array of Point pointers with 3 elements on the heap. 
 *   - Create for each element in the array a point on the heap. 
 *   - Iterate the array and print each point in the array. 
 *   - Iterate the array again and delete each point in the array. 
 *   - Delete the array itself.  
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

/*
 * Memory layout:
 *
 *   arr  →  [ ptr0 ][ ptr1 ][ ptr2 ]     array of 3 Point pointers (new Point*[3])
 *              ↓       ↓       ↓
 *            Point   Point   Point       each created separately (new Point(...))
 *
 * Free in reverse: delete each Point first, then delete[] the pointer array.
 */

    // Part B: Array of pointers

    Point** arr = new Point*[3]; // an array of Point Pointers on the heap 

    arr[0] = new Point(); // Create a default Point on the heap
    arr[1] = new Point(3, 8); // Create a Point with (x, y)
    arr[2] = new Point(*arr[1]); // Create a copy of the second Point on the heap

    for (int i = 0; i < 3; ++i)
    {
        std::cout << "arr[" << i << "]: " << *arr[i] << std::endl;
    }

    for (int i = 0; i < 3; ++i)
    {
        delete arr[i]; // Free the memory allocated for each Point in the array
    }

    delete[] arr; // Free the memory allocated for the array of Point pointers

    return 0;
    
}

