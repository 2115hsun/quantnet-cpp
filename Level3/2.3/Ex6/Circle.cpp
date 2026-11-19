/*
 * Level 3 - 2.3 Exercise 6 (Circle.cpp)
 * Implementation of the Circle class.
*/
#define _USE_MATH_DEFINES
#include "Circle.hpp"
#include <cmath>
#include <sstream>

Circle::Circle() : m_centre(0, 0), m_radius(1) {} // Default constructor

Circle::Circle(const Point& centre, double radius) : m_centre(centre), m_radius(radius) {} // Constructor with parameters

Circle::Circle(const Circle& c) : m_centre(c.m_centre), m_radius(c.m_radius) {} // Copy constructor

Circle::~Circle() {} // Destructor

const Point& Circle::CentrePoint() const // Getter for centre point
{
    return m_centre;
}

double Circle::Radius() const // Getter for radius
{
    return m_radius;
}

void Circle::CentrePoint(const Point& centre) // Setter for centre point
{
    m_centre = centre;
}

void Circle::Radius(double radius) // Setter for radius
{
    m_radius = radius;
}

double Circle::Diameter() const // Diameter of the circle
{
    return 2 * m_radius;
}

double Circle::Area() const // Area of the circle
{
    return M_PI * m_radius * m_radius;
}

double Circle::Circumference() const // Circumference of the circle
{
    return 2 * M_PI * m_radius;
}

std::string Circle::ToString() const // String description of the circle
{
    std::ostringstream oss;
    oss << "Circle with centre at " << m_centre.ToString() << " and radius " << m_radius;
    return oss.str();
}




