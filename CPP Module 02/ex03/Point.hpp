#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include "Fixed.hpp"
# include <string>
# include <cmath>

class Point
{
    private:
        Fixed const m_x;
        Fixed const m_y;
    public:
        Point();
        ~Point();
        Point(Point const &src);
        Point (float const x, float const y);
        Point(Fixed const x, Fixed const y);
        Point &operator= (Point & rhs);
        void    setX(Fixed f);
        void    setY(Fixed f);
        Fixed   getX(void) const;
        Fixed   getY(void) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif