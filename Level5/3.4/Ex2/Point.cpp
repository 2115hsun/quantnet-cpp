/*
 * Objective: Adding print to assignmnet operators 
 */

#include "Point.hpp"
#include <cmath>
#include <sstream>
#include <iostream>

namespace Dave::CAD {

// Constructors and destructor. Each one prints a line so I can count the calls
Point::Point(): Shape(), m_x(0.0), m_y(0.0)
{
    std::cout << "Point created at (" << m_x << ", " << m_y << ")" << std::endl;
}   

// Constructor that accepts one double as an argument 
Point::Point(double value): Shape(), m_x(value), m_y(value) 
{
    std::cout << "Point created from one value at (" << m_x << ", " << m_y << ")" << std::endl;
}

Point::Point(double x, double y) : Shape(), m_x(x), m_y(y)
{
    std::cout << "Point created at (" << m_x << ", " << m_y << ")" << std::endl;
}

// Copy constructor: copies the coordinates of p
Point::Point(const Point& p) : Shape(p), m_x(p.m_x), m_y(p.m_y)
{
    std::cout << "Point copied at (" << m_x << ", " << m_y << ")" << std::endl;
}

Point::~Point() {
    std::cout << "Point destroyed at (" << m_x << ", " << m_y << ")" << std::endl;
}

// I build the string with a stringstream so the doubles get converted for me
std::string Point::ToString() const
{
    std::stringstream ss;
    ss << "Point(" << m_x << ", " << m_y << ")";
    return ss.str();
}

// Distance to the origin: sqrt(x^2 + y^2)
double Point::Distance() const
{
    return std::sqrt(m_x * m_x + m_y * m_y);
} 

// Pythagoras on the differences between the two points
double Point::Distance(const Point& p) const
{
    // p.m_x = 0; // My test: this doesn't compile because p is a const reference

    double dx = p.m_x - m_x;
    double dy = p.m_y - m_y;
    return std::sqrt(dx * dx + dy * dy);
}

// ----------------Operators----------------------

// Minus: returns a new point with both coordinates negtaed; this point is unchanged
Point Point::operator - () const
{
    return Point(-m_x, -m_y);

}

// Scale: returns a new point with both coordinates scaled; this point is unchanged
Point Point::operator * (double factor) const
{
    return Point(factor * m_x, factor * m_y);

}

// Add coordinates: returns a new point with both coordinates added; this point is unchanged
Point Point::operator + (const Point& p) const
{
    return Point(m_x + p.m_x, m_y + p.m_y);

}

// Equally compare operator: returns true if the coordinates are equal, false otherwise
bool Point::operator == (const Point& p) const
{
    return (m_x == p.m_x && m_y == p.m_y);
}

// Assignment operator: copies the coordinates of p to this point, and returns a reference to this point
Point& Point::operator = (const Point& p)
{
    // Avoid doing assign to myself
    if (this == &p) {
        return *this;
    }

    m_x = p.m_x;
    m_y = p.m_y;
    // Shape::operator=(p);
    std::cout << "Point assigned at (" << m_x << ", " << m_y << ")" << std::endl; // Print assignment message
    return *this;
}

// Scale the coordiantes & assign: scales the coordinates of this point, and returns a reference to this point
Point& Point::operator *= (double factor)
{
    m_x *= factor;
    m_y *= factor;
    return *this;
}

//Global operator<< for Point
std::ostream& operator << (std::ostream& os, const Point& p)
{
    os << "Point(" << p.m_x << ", " << p.m_y << ")";
    return os;
}

} // namespace Dave::CAD
