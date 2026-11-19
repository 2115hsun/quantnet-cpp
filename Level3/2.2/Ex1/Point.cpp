/*
 * Objective:
 *   Implementation of my Point class from Point.hpp.
 */

#include "Point.hpp"
#include <sstream>

// The default constructor starts the point at (0, 0)
Point::Point() : m_x(0.0), m_y(0.0) {}
Point::~Point() {}

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
