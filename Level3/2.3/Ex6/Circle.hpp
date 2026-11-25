/*
 * Objective: Implement a Circle class that uses the Point class to represent the centre of the circle. 
 * The Circle class should have a radius and provide methods to calculate the diameter, area, and circumference of the circle. 
 * Additionally, implement a method to return a string representation of the circle's properties.
*/

#ifndef CIRCLE_HPP
#define CIRCLE_HPP
#define _USE_MATH_DEFINES

#include <string>
#include "Point.hpp"



class Circle
{
private:
    Point m_centre; // A unique circle is defined by its centre point and radius
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

    std::string ToString() const; // String description of the circle
};

#endif /* CIRCLE_HPP */
