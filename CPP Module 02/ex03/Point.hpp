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
        Point(); // Un constructor por defecto que inicialice x e y a 0.
        ~Point(); // Un destructor.
        Point(Point const &src); // Un constructor de copia.
        Point (float const x, float const y); //Un constructor que acepte dos parámetros de punto flotante constantes y que inicie x e y con esos valores.
        Point(Fixed const x, Fixed const y);
        Point &operator= (Point & rhs); // Una sobrecarga del operador de asignación
        void    setX(Fixed f);
        void    setY(Fixed f);
        Fixed   getX(void) const;
        Fixed   getY(void) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif