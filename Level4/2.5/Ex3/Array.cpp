/*
 * Objective:
 *   Implementation of my Array class from Array.hpp.
 */

#include "Array.hpp"

// Default constructor: 10 default Points on the heap 
Array::Array(): m_data(new Point[10]), m_size(10) {} 

// Constructor with specified size: 'size' default Points on the heap 
Array::Array(int size): m_data(new Point[size]), m_size(size) {}

// Copy constructor 
Array::Array(const Array& other): m_data(new Point[other.m_size]), m_size(other.m_size) {
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
    m_data = new Point[m_size];
    for (int i = 0; i < m_size; ++i) {
        m_data[i] = source.m_data[i];
    }
    return *this;
}

// -------------- Element access -----------------
void Array::SetElement(int index, const Point& value) {
    if (index >= 0 && index < m_size) {
        m_data[index] = value;
    }
}
Point& Array::GetElement(int index) {
    if (index >= 0 && index < m_size) {
        return m_data[index];
    }
    // Handle out-of-bounds access, here we throw an exception
    return m_data[0]; // Return the first element as a fallback (or could throw an exception)
}
Point& Array::operator[](int index) {
    if (index >= 0 && index < m_size) {
        return m_data[index];
    }
    return m_data[0]; // Return the first element as a fallback (or could throw an exception)
}

const Point& Array::operator[](int index) const {
    if (index >= 0 && index < m_size) {
        return m_data[index];
    }
    return m_data[0]; // Return the first element as a fallback (or could throw an exception)
}



