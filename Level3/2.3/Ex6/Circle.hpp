/*
 * Objective:
 *   Header for my Circle class. A circle has a centre Point and a radius.
 *   It has constructors, a destructor, getters and setters for the centre
 *   and radius, Diameter(), Area(), Circumference() and ToString(). Like
 *   Line, it passes Points by const reference and uses const functions.
 */

#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include <string>
#include "Point.hpp"
#include <cmath>
#include <sstream>

#define _USE_MATH_DEFINES

class Circle
{
private:
    Point m_centre; // Centre point. With the radius, it fully defines the circle
    double m_radius;

public:
    Circle(); // Default constructor
    Circle(const Point& centre, double radius); // Constructor with parameters
    Circle(const Circle& c); // Copy constructor
    ~Circle(); // Destructor

    const Point& CentrePoint() const; // Getter for centre point
    double Radius() const; // Getter for radius

    void CentrePoint(const Point& centre); // Setter for centre point
    void Radius(double radius); // Setter for radius

    double Diameter() const; // Diameter of the circle
    double Area() const; // Area of the circle
    double Circumference() const; // Circumference of the circle

    std::string ToString() const; // e.g. "Circle with centre at Point(0, 0) and radius 1"
};

#endif /* CIRCLE_HPP */
