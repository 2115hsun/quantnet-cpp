/*
 * Objective:
 *   Header for my Point class. The constructors and destructor print a
 *   line, so I can see when points get created, copied and destroyed.
 *
 * Changes from previous version (2.2 Exercise 2):
 *   - Added a constructor that takes x and y.
 *   - Added a copy constructor.
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
    double Distance(Point p) const; // Distance to another point (p is copied)
};

#endif
