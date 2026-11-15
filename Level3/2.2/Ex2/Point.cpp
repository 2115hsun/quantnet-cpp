/*
 * Level 3 - 2.2 Exercise 2 (Point.cpp)
 * Implementation of the Point class.
*/

#include "Point.hpp"
#include <cmath>
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

double Point::DistanceOrigin() const
{
    return std::sqrt(m_x * m_x + m_y * m_y);
}

double Point::Distance(Point p) const
{
    double dx = p.m_x - m_x;
    double dy = p.m_y - m_y;
    return std::sqrt(dx * dx + dy * dy);
}
