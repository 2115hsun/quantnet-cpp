/*
 * Objective: Implmentation of the Circle Class
 * 
 * Changes:
 *   Added ToString() to include Shape::ToString() for polymorphic behavior.
 */
#define _USE_MATH_DEFINES
#include "Circle.hpp"
#include <cmath>
#include <sstream>


namespace Dave::CAD {
// Constructors and destructor. The default circle is at (0, 0) with radius 1
Circle::Circle() : Shape(), m_centre(0, 0), m_radius(1) {}

Circle::Circle(const Point& centre, double radius) : Shape(), m_centre(centre), m_radius(radius) {}

Circle::Circle(const Circle& c) : Shape(c), m_centre(c.m_centre), m_radius(c.m_radius) {}

Circle::~Circle() {}

// Getters. The centre comes back as a const reference so it isn't copied
const Point& Circle::CentrePoint() const
{
    return m_centre;
}

double Circle::Radius() const
{
    return m_radius;
}

// Setters
void Circle::CentrePoint(const Point& centre)
{
    m_centre = centre;
}

void Circle::Radius(double radius)
{
    m_radius = radius;
}

// d = 2r
double Circle::Diameter() const
{
    return 2 * m_radius;
}

// A = pi * r^2
double Circle::Area() const
{
    return M_PI * m_radius * m_radius;
}

// C = 2 * pi * r
double Circle::Circumference() const
{
    return 2 * M_PI * m_radius;
}

// I reuse Point::ToString() for the centre
std::string Circle::ToString() const
{
    std::string s = Shape::ToString();
    std::ostringstream oss;
    oss << s << " Circle with centre at " << m_centre.ToString() << " and radius " << m_radius;
    return oss.str();
}

// ------------------Operators----------------------
Circle& Circle::operator = (const Circle& source)
{
    // Check for self-assignment
    if (this == &source) {
        return *this; // Return the current object unchanged
    }   

    // Call the base class assignment operator
    Shape::operator=(source);

    // Copy the centre and radius from the source circle
    m_centre = source.m_centre;
    m_radius = source.m_radius;

    return *this; // Return the current object
}

// Global operator<< for Circle
std::ostream& operator << (std::ostream& os, const Circle& c)
{
    os << "Circle with centre at " << c.m_centre << " and radius " << c.m_radius;
    return os;
}
} // namespace Dave::CAD