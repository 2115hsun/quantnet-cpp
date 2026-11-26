/*
 * Objective:
 *   Implementation of my Array class from Array.hpp.
 * Changes:
 *   Wrapped in namespace Dave::Containers; refers to Point as CAD::Point
 */

#include "Array.hpp"

namespace Dave::Containers {
// Default constructor: 10 default Points on the heap 
Array::Array(): m_data(new CAD::Point[10]), m_size(10) {} 

// Constructor with specified size: 'size' default Points on the heap 
Array::Array(int size): m_data(new CAD::Point[size]), m_size(size) {}

// Copy constructor 
Array::Array(const Array& other): m_data(new CAD::Point[other.m_size]), m_size(other.m_size) {
    for (int i = 0; i < m_size; ++i) {
        m_data[i] = other.m_data[i];
    }
}

// Destructor: delete the dynamic array of Points
Array::~Array() {
    delete[] m_data;
}

int Array::Size() const {
    return m_size;
}
// --------------- Assignment -----------------
Array& Array::operator = (const Array& source) {
    if (this == &source) { // comparing addresses to check for self-assignment
        return *this; 
    }
    delete[] m_data; // free the old memory 
    m_size = source.m_size; // update the size to match the source array
    m_data = new CAD::Point[m_size];
    for (int i = 0; i < m_size; ++i) {
        m_data[i] = source.m_data[i];
    }
    return *this;
}

// -------------- Element access -----------------
void Array::SetElement(int index, const CAD::Point& value) {
    if (index >= 0 && index < m_size) {
        m_data[index] = value;
    }
}
CAD::Point& Array::GetElement(int index) {
    if (index >= 0 && index < m_size) {
        return m_data[index];
    }
    return m_data[0]; // Return the first element as a fallback (or could throw an exception)
}
CAD::Point& Array::operator[](int index) {
    if (index >= 0 && index < m_size) {
        return m_data[index];
    }
    return m_data[0]; // Return the first element as a fallback (or could throw an exception)
}

const CAD::Point& Array::operator[](int index) const {
    if (index >= 0 && index < m_size) {
        return m_data[index];
    }
    return m_data[0]; // Return the first element as a fallback (or could throw an exception)
}


} // namespace Dave::Containers
