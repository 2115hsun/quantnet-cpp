/*
 * Objective:
 *   Implementation of my Shape class from Shape.hpp.
 */

#include "Shape.hpp"
#include <iostream>
#include <cstdlib>
#include <sstream>

namespace Dave::CAD
{
    // Default constructor 
    Shape::Shape() : m_id(rand()) {}

    // Copy constructor
    Shape::Shape(const Shape& source) : m_id(source.m_id) {}

    // Destructor
    Shape::~Shape() 
    {
        std::cout << "Shape with ID " << m_id << " destroyed." << std::endl;
    }

    // Assignment: self-assignment check and copy
    Shape& Shape::operator=(const Shape& source)
    {
        if (this == &source)
            return *this;
        m_id = source.m_id;
        return *this;
    }

    // ToString: Using example returning "ID: 123"
    std::string Shape::ToString() const
    {
        std::ostringstream oss;
        oss << "ID: " << m_id;
        return oss.str();
    }

    // ID: return the id
    int Shape::ID() const
    {
        return m_id;
    }

}

