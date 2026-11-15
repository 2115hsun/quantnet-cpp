/*
 * Level 3 - 2.2 Exercise 2 (Point.hpp)
 * Add DistanceOrigin() and Distance(Point p) using std::sqrt from <cmath>.
*/

#ifndef POINT_HPP
#define POINT_HPP

#include <string>

class Point
{
private:
    double m_x;
    double m_y;

public:
    Point(); // Default constructor
    ~Point(); // Destructor
    double GetX() const;
    double GetY() const;
    void SetX(double x);
    void SetY(double y);
    std::string ToString() const;

    double DistanceOrigin() const;
    double Distance(Point p) const;
};

#endif