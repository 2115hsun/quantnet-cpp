/*
 * Objective:
 *   Header for my Shape base class. It holds an id number and has a
 *   default constructor (random id), a copy constructor, an assignment
 *   operator, ToString() and ID().
 * Changes:
 *   Added virtual keyword to ToString() to enable polymorphic behavior.
 *   Destructor is virtual. 
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
        virtual ~Shape(); // virtual destructor ensures derived class destructors are called correctly
        // without virtual ~, deleting through a Shape* ran only ~Shape(), skipping ~Point() and ~Line(), and leaving the member points undestroyed. 
        Shape& operator = (const Shape& source);

        virtual std::string ToString() const; // virtual: the Object type will determine which ToString() is called at runtime
        int ID() const;
    };
}

#endif
