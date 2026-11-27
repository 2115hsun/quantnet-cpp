/*
 * Objective:
 *   Header for my Shape base class. It holds an id number and has a
 *   default constructor (random id), a copy constructor, an assignment
 *   operator, ToString() and ID().
 */

#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <string>

namespace Dave::CAD
{
    class Shape
    {
    private:
        int m_id;
    public:
        Shape();
        Shape(const Shape& source);
        ~Shape();
        Shape& operator = (const Shape& source);

        std::string ToString() const;
        int ID() const;
    };
}

#endif
