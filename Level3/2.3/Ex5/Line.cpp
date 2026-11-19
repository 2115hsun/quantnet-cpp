/*
 * Objective:
 *   Implementation of my Line class from Line.hpp.
 */
#include "Line.hpp"
#include <sstream>

// Constructors and destructor. The default one puts both points at (0, 0)
Line::Line() : m_p1(0, 0), m_p2(0, 0) {}

Line::Line(const Point& p1, const Point& p2) : m_p1(p1), m_p2(p2) {}

Line::Line(const Line& l) : m_p1(l.m_p1), m_p2(l.m_p2) {}

Line::~Line() {}

// Getters. They return a const reference so the point isn't copied
const Point& Line::P1() const
{
    return m_p1;
}

const Point& Line::P2() const
{
    return m_p2;
}

// Setters
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

// Delegation: the length is just the distance between the two points
double Line::Length() const
{
    return P1().Distance(P2());
}
