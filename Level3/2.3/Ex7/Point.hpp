/*
 * Objective: Replacing the setters and getters with inline implementations to speed up execution.
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

    Point();
    Point(double x, double y);
    Point(const Point& p);
    ~Point();

    void X(double x) { m_x = x; } // Setter for x coordinate
    void Y(double y) { m_y = y; } // Setter for y coordinate
    
    // Normal Inline getters for x and y coordinates
    double X() const;
    double Y() const;

    // Other member functions
    std::string ToString() const;
    double Distance() const;
    double Distance(const Point& p) const;
};

inline double Point::X() const // Inline getter for x coordinate
{
    return m_x;
}

inline double Point::Y() const // Inline getter for y coordinate
{
    return m_y;
}

#endif