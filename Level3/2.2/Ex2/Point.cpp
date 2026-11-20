/*
 * Objective:
 *   Implementation of my Point class from Point.hpp, now with the two
 *   distance functions.
 */

#include "Point.hpp"
#include <cmath>
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

// Pythagoras with the origin, so it's just sqrt(x^2 + y^2)
double Point::DistanceOrigin() const
{
    return std::sqrt(m_x * m_x + m_y * m_y);
}

// Pythagoras on the differences between the two points
double Point::Distance(Point p) const
{
    double dx = p.m_x - m_x;
    double dy = p.m_y - m_y;
    return std::sqrt(dx * dx + dy * dy);
}
