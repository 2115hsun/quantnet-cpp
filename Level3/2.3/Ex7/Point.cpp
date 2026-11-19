/*
 * Objective: Implement a Point class that represents a point in 2D space with x and y coordinates.
    * The Point class will provide methods to get and set the coordinates, calculate the distance from the origin, 
    * and calculate the distance to another point.
    * Additionally, implement a method to return a string representation of the point's coordinates.
 * Changes: Deleted the setters and getters from the class definition and implemented them as inline functions to speed up execution.
*/

#include "Point.hpp"
#include <cmath>
#include <sstream>
#include <iostream>

Point::Point(): m_x(0.0), m_y(0.0) 
{
    std::cout << "Point created at (" << m_x << ", " << m_y << ")" << std::endl;
}

Point::Point(double x, double y) : m_x(x), m_y(y)
{
    std::cout << "Point created at (" << m_x << ", " << m_y << ")" << std::endl;
}

Point::Point(const Point& p) : m_x(p.m_x), m_y(p.m_y)
{
    std::cout << "Point copied at (" << m_x << ", " << m_y << ")" << std::endl;
}

Point::~Point() {
    std::cout << "Point destroyed at (" << m_x << ", " << m_y << ")" << std::endl;
}

std::string Point::ToString() const
{
    std::stringstream ss;
    ss << "Point(" << m_x << ", " << m_y << ")";
    return ss.str();
}

double Point::Distance() const
{
    return std::sqrt(m_x * m_x + m_y * m_y);
}

double Point::Distance(const Point& p) const
{
    // p.m_x = 0; // This line is invalid, it is only a test
    
    double dx = p.m_x - m_x;
    double dy = p.m_y - m_y;
    return std::sqrt(dx * dx + dy * dy);
}
