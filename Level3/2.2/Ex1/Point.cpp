/*
 * Level 3 - 2.2 Exercise 1 (Point.cpp)
 * Implementation of the Point class.
*/

#include "Point.hpp"
#include <sstream>

Point::Point() : m_x(0.0), m_y(0.0) {}
Point::~Point() {}

double Point::GetX() const
{
    return m_x;
}

double Point::GetY() const
{
    return m_y;
}

void Point::SetX(double x)
{
    m_x = x;
}

void Point::SetY(double y)
{
    m_y = y;
}

std::string Point::ToString() const
{
    std::stringstream ss;
    ss << "Point(" << m_x << ", " << m_y << ")";
    return ss.str();
}
