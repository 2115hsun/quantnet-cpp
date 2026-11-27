/*
 * Objective:
 *   Header for my Array class. It manages a dynamic C array of Points
 *   (m_data) and its size, so the caller never has to call new or delete.
 * Changes:
 *   Wrapped in namespace Dave::Containers; refers to Point as CAD::Point
 */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <string>
#include "Point.hpp"

namespace Dave::Containers {
class Array
{
private:
    CAD::Point* m_data;
    int m_size;

public:
    Array(); // Default constructor
    Array(int size); // Size elements 
    Array(const Array& other); // Copy constructor
    ~Array(); // Destructor

    Array& operator=(const Array& other); // Assignment operator

    int Size() const; // Get the size of the array
    void SetElement(int index, const CAD::Point& p); // Ignore if index out of bounds
    CAD::Point& GetElement(int index); // First element if index is out of bounds

    CAD::Point& operator[](int index); // Access element by index
    const CAD::Point& operator[](int index) const; // Access element by index (const version)
};

} // namespace Dave::Containers

#endif
