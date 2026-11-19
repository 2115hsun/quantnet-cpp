/*
 * Objective:
 *   Header for my Point class, now with two distance functions.
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

    double DistanceOrigin() const; // Distance to (0, 0)
    double Distance(Point p) const; // Distance to another point
};

#endif
