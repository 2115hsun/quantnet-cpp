/*
 * Objective:
 *   Assign in the body instead of using the colon syntax
 */

#include "Line.hpp"
#include <sstream>
namespace Dave::CAD {   
// Constructors and destructor. The default one puts both points at (0, 0)
Line::Line() : m_p1(0, 0), m_p2(0, 0) {}

// Default constructor: assigns both points to (0, 0) in the body
// Line::Line()
// {
//     m_p1 = Point(0, 0);
//     m_p2 = Point(0, 0);
// }

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

// ------------------Operators----------------------
Line& Line::operator = (const Line& source)
{
    // Check for self-assignment
    if (this == &source) {
        return *this; // Return the current object unchanged
    }

    // Copy the points from the source line
    m_p1 = source.m_p1;
    m_p2 = source.m_p2;

    return *this; // Return the current object
}

// Global operator<< for Line
std::ostream& operator << (std::ostream& os, const Line& l)
{
    os << "Line from " << l.m_p1 << " to " << l.m_p2;
    return os;
}
} // namespace Dave::CAD
