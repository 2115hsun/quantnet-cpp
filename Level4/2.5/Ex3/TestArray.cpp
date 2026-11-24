/*
 * Objective:
 *   Test program for my Array class.
 */

#include <iostream>
#include "Point.hpp"
#include "Array.hpp"

int main()
{
    Array a(3);
    std::cout << "Array size: " << a.Size() << std::endl;

    // ------------- Writing elements -------------
    a.SetElement(0, Point(1, 2));
    a[1] = Point(3, 4);
    a.SetElement(99, Point(9, 9));
    std::cout << "a[99]: " << a[99] << std::endl;

    // ------------- Reading elements -------------
    std::cout << "Element 0: " << a.GetElement(0) << std::endl;
    std::cout << "Element 1: " << a[1] << std::endl;
    std::cout << "Element 2: " << a[2] << std::endl;

    // ------------- Copy constructor -------------
    Array b(a); // Use the copy constructor
    std::cout << "Copied array size: " << b.Size() << std::endl;
    std::cout << "Copied element 0: " << b.GetElement(0) << std::endl;
    std::cout << "Copied element 1: " << b[1] << std::endl;
    std::cout << "Copied element 2: " << b[2] << std::endl;
    a[0] = Point(7, 8);
    std::cout << "Modified element 0: " << a[0] << std::endl;
    std::cout << "Copied element 0 after modification: " << b.GetElement(0) << std::endl;

    // ------------- Assignment operator -------------
    a = a;
    Array c;
    c = a; 
    std::cout << "Self-assignment done." << a[0] << std::endl;
    std::cout << "Assigned array size: " << c.Size() << std::endl;
    std::cout << "Assigned element 0: " << c[0] << std::endl;

    // ------------- Const array -------------
    const Array& ca = a;
    std::cout << "Const array size: " << ca.Size() << std::endl;
    std::cout << "Const element 0: " << ca[0] << std::endl; // ca.GetElement(0) does not compile: GetElement is not a const member function
    std::cout << "Const element 1: " << ca[1] << std::endl;
    std::cout << "Const element 2: " << ca[2] << std::endl;


    return 0;
}
