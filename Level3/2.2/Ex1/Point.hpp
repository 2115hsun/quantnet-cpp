/*
 * Level 3 - 2.2 Exercise 1 (Point.hpp)
 * Point class with private m_x, m_y. Public: default constructor,
 * destructor, GetX()/GetY(), SetX()/SetY(), and ToString() returning
 * e.g. "Point(1.5, 3.9)" (build it with std::stringstream).
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
};

#endif 
