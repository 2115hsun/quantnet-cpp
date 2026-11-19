/*
 * Objective:
 *   Header for my Point class. It keeps the x and y coordinates private and
 *   gives me a default constructor, a destructor, getters and setters for
 *   x and y, and ToString() for a text version of the point.
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
    ~Point(); // Destructor
    double GetX() const;
    double GetY() const;
    void SetX(double x);
    void SetY(double y);
    std::string ToString() const; // e.g. "Point(1.5, 3.9)"
};

#endif
