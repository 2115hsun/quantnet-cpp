/*
 * Level 3 - 2.3 Exercise 1 (Point.hpp)
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
    Point(double x, double y); // Constructor with parameters
    Point(const Point& p); // Copy constructor
    ~Point(); // Destructor
    double X() const;
    double Y() const;
    void X(double x);
    void Y(double y);
    std::string ToString() const;

    double Distance() const;
    double Distance(const Point& p) const;
};

#endif