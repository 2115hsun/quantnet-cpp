/*
 * Objective:
 *   Header for my Line class. A line holds two Point objects, its start and
 *   end point (composition). I pass Points by const reference and made
 *   every function that doesn't change the line const.
 */

#ifndef LINE_HPP
#define LINE_HPP

#include <string>
#include "Point.hpp"
#include <cmath>
#include <sstream>

class Line
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

    std::string ToString() const; // e.g. "Line from Point(0, 0) to Point(3, 4)"
    double Length() const; // Length of the line
};

#endif // LINE_HPP
