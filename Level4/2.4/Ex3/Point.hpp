/*
 * Objective:
 *   Header for my Point class with inline getters and setters, so short
 *   calls get copied in place instead of being real function calls.
 *
 * Changes from previous version:
 *   - Testing constructors as conversion operators
 */

#ifndef POINT_HPP
#define POINT_HPP
#include <ostream>

#include <string>

class Point
{
private:
    double m_x; // x coordinate
    double m_y; // y coordinate

public:
    Point();
    explicit Point(double value); // Constructor that accepts one double as an argument 
    // if using explicit Point (double value), we will get an error "TestPoint.cpp:89:12: error: no match for 'operator==' (operand types are 'Point' and 'double')"
    Point(double x, double y);
    Point(const Point& p);
    ~Point();

    // Default inline setters, defined right here in the class
    void X(double x) { m_x = x; } // Setter for x
    void Y(double y) { m_y = y; } // Setter for y

    // Normal inline getters, defined below the class
    double X() const;
    double Y() const;

    // Everything else is still in Point.cpp
    std::string ToString() const;
    double Distance() const;
    double Distance(const Point& p) const;

    // Operators
    Point operator - () const; // Negate the coordinates
    Point operator * (double factor) const; // Scale the coordinates
    Point operator + (const Point& p) const; // Add coordinates
    bool operator == (const Point& p) const; // Equally compare operator
    Point& operator = (const Point& source); // Assignment operator
    Point& operator *= (double factor); // Scale the coordinates & assign

};

inline double Point::X() const // Getter for x
{
    return m_x;
}

inline double Point::Y() const // Getter for y
{
    return m_y;
}

// Send a point to an output stream 
std::ostream& operator << (std::ostream& os, const Point& p);

#endif
