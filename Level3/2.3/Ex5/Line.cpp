/*
 * Level 3 - 2.3 Exercise 5 (Line.cpp)
 * Implementation of the Line class.
*/
#include "Line.hpp"
#include <sstream>

Line::Line() : m_p1(0, 0), m_p2(0, 0) {}

Line::Line(const Point& p1, const Point& p2) : m_p1(p1), m_p2(p2) {}

Line::Line(const Line& l) : m_p1(l.m_p1), m_p2(l.m_p2) {}

Line::~Line() {}

const Point& Line::P1() const
{
    return m_p1;
}

const Point& Line::P2() const
{
    return m_p2;
}

void Line::P1(const Point& p1)
{
    m_p1 = p1;
}

void Line::P2(const Point& p2)
{
    m_p2 = p2;
}

std::string Line::ToString() const
{
    std::ostringstream oss;
    oss << "Line from " << P1().ToString() << " to " << P2().ToString();
    return oss.str();
}

double Line::Length() const
{
    return P1().Distance(P2());
}