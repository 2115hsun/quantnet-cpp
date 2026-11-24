/*
 * Objective:
 *   Header for my Array class. It manages a dynamic C array of Points
 *   (m_data) and its size, so the caller never has to call new or delete.
 */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <string>
#include "Point.hpp"

class Array
{
private:
    Point* m_data;
    int m_size;

public:
    Array(); // Default constructor
    Array(int size); // Size elements 
    Array(const Array& other); // Copy constructor
    ~Array(); // Destructor

    Array& operator=(const Array& other); // Assignment operator

    int Size() const; // Get the size of the array
    void SetElement(int index, const Point& p); // Ignore if index out of bounds
    Point& GetElement(int index); // First element if index is out of bounds

    Point& operator[](int index); // Access element by index
    const Point& operator[](int index) const; // Access element by index (const version)
};

#endif
