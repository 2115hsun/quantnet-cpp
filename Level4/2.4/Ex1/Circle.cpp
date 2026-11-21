/*
 * Objective: Implmentation of the Circle Class
 */
#define _USE_MATH_DEFINES // Has to come before <cmath> so M_PI gets defined
#include "Circle.hpp"
#include <cmath>
#include <sstream>

// Constructors and destructor. The default circle is at (0, 0) with radius 1
Circle::Circle() : m_centre(0, 0), m_radius(1) {}

Circle::Circle(const Point& centre, double radius) : m_centre(centre), m_radius(radius) {}

Circle::Circle(const Circle& c) : m_centre(c.m_centre), m_radius(c.m_radius) {}

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
    std::ostringstream oss;
    oss << "Circle with centre at " << m_centre.ToString() << " and radius " << m_radius;
    return oss.str();
}

// ------------------Operators----------------------
Circle& Circle::operator = (const Circle& source)
{
    // Check for self-assignment
    if (this == &source) {
        return *this; // Return the current object unchanged
    }   

    // Copy the centre and radius from the source circle
    m_centre = source.m_centre;
    m_radius = source.m_radius;

    return *this; // Return the current object
}