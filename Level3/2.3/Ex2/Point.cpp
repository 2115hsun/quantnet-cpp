/*
 * Objective:
 *   Implementation of my Point class from Point.hpp.
 *
 * Changes from previous version (2.3 Exercise 1):
 *   - Distance() takes a const Point& instead of a copy.
 */

#include "Point.hpp"
#include <cmath>
#include <sstream>
#include <iostream>

// Constructors and destructor. Each one prints a line so I can count the calls
Point::Point(): m_x(0.0), m_y(0.0)
{
    std::cout << "Point created at (" << m_x << ", " << m_y << ")" << std::endl;
}

Point::Point(double x, double y) : m_x(x), m_y(y)
{
    std::cout << "Point created at (" << m_x << ", " << m_y << ")" << std::endl;
}

// Copy constructor: copies the coordinates of p
Point::Point(const Point& p) : m_x(p.m_x), m_y(p.m_y)
{
    std::cout << "Point copied at (" << m_x << ", " << m_y << ")" << std::endl;
}

Point::~Point() {
    std::cout << "Point destroyed at (" << m_x << ", " << m_y << ")" << std::endl;
}

// Getters
double Point::GetX() const
{
    return m_x;
}

double Point::GetY() const
{
    return m_y;
}

// Setters
void Point::SetX(double x)
{
    m_x = x;
}

void Point::SetY(double y)
{
    m_y = y;
}

// I build the string with a stringstream so the doubles get converted for me
std::string Point::ToString() const
{
    std::stringstream ss;
    ss << "Point(" << m_x << ", " << m_y << ")";
    return ss.str();
}

// Pythagoras with the origin, so it's just sqrt(x^2 + y^2)
double Point::DistanceOrigin() const
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
