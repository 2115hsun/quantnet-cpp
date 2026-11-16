/*
 * Level 3 - 2.3 Exercise 5 (Line.hpp)
 * Line with a start and end Point (composition). Default constructor
 * (points at 0, 0), constructor with start and end points, copy
 * constructor, destructor, overloaded getters/setters P1() and P2(),
 * ToString() and Length() (delegates to Point::Distance()).
 * Use const arguments, const functions and pass by reference.
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
    Point m_p1;
    Point m_p2;

public:
    Line(); // Default constructor
    Line (const Point& p1, const Point& p2); // Constructor with parameters
    Line(const Line& l); // Copy constructor
    ~Line(); // Destructor

    const Point& P1() const; // Getter for first point
    const Point& P2() const; // Getter for second point

    void P1(const Point& p1); // Setter for first point
    void P2(const Point& p2); // Setter for second point

    std::string ToString() const; // String description of the line
    double Length() const; // Length of the line
};

#endif // LINE_HPP
