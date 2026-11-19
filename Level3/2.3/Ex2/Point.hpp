/*
 * Objective:
 *   Header for my Point class. Distance() now takes the other point by
 *   const reference, so no copy is made.
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
    double GetX() const;
    double GetY() const;
    void SetX(double x);
    void SetY(double y);
    std::string ToString() const; // e.g. "Point(1.5, 3.9)"

    double DistanceOrigin() const; // Distance to (0, 0)
    double Distance(const Point& p) const; // const reference, so p isn't copied or changed
};

#endif
