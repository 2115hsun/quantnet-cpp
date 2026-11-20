/*
 * Objective:
 *   Header for my Point class. The getters, Distance() and ToString() are
 *   const functions, so I can call them on a const Point.
 */

#ifndef POINT_HPP
#define POINT_HPP

#include <string>

class Point
{
private:
    double m_x; // x coordinate
    double m_y; // y coordinate

public:
    Point(); // Default constructor
    Point(double x, double y); // Constructor with parameters
    Point(const Point& p); // Copy constructor
    ~Point(); // Destructor
    double X() const; // Getter for x
    double Y() const; // Getter for y
    void X(double x); // Setter for x
    void Y(double y); // Setter for y
    std::string ToString() const; // e.g. "Point(1.5, 3.9)"

    double Distance() const; // Distance to (0, 0)
    double Distance(const Point& p) const; // Distance to another point
};

#endif
