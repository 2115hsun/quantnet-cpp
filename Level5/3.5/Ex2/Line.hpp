/*
 * Objective:
 *   Header for my Line class, now with an assignment operator.
 *
 * Changes:
 *   - Derived from Shape class.
 */

#ifndef LINE_HPP
#define LINE_HPP

#include <string>
#include "Point.hpp"
#include "Shape.hpp"
#include <cmath>
#include <sstream>

namespace Dave::CAD {
class Line: public Shape
{
private:
    Point m_p1; // Start point
    Point m_p2; // End point

public:
    Line(); // Default constructor
    Line (const Point& p1, const Point& p2); // Constructor with parameters
    Line(const Line& l); // Copy constructor
    ~Line(); // Destructor

    const Point& P1() const; // Getter for the start point
    const Point& P2() const; // Getter for the end point

    void P1(const Point& p1); // Setter for the start point
    void P2(const Point& p2); // Setter for the end point

    Line& operator = (const Line& source); // Assignment operator

    std::string ToString() const; // e.g. "Line from Point(0, 0) to Point(3, 4)"
    double Length() const; // Length of the line

    friend std::ostream& operator << (std::ostream& os, const Line& l); // Friend for output stream operator
};

} // namespace Dave::CAD

#endif // LINE_HPP
