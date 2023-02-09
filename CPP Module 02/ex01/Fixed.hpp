#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <string>
# include <cmath>



/* 
 * Orthodox Canonical Class Form (OCCF)
 * Class containing at least: 
 * - Constructor default
 * - Copy Constructor
 * - Operator " = " overloaded
 * - Destructor
 */

class   Fixed
{
    private:
        int m_b; // the position of fixed point in the width counting from right to left (fixed_point_value)
        static const int m_w = 8; // width or number of bites for fixed point

    public:
        /* 
         * =======
         * ex00 ==
         * =======
         */

        /*
         * Constructor:
         */

        Fixed();
        
        /*
         * Destructor:
         */

        ~Fixed();
        
        /*
         * Copy Constructor:
         * a constructor which allows to create a copy of different instance
         */

        Fixed(Fixed const &src);

        /* 
         * Operator '=' overload
		 * rhs = right hand side, a constant reference to our object instance
		 * not a const function because our instance will be modified (ex: a = 14)
		 * Returns a reference to allow us to do "a = b" or "a = b = c" or "a = b = c = d"
         */

        Fixed &operator= (Fixed const & rhs);
        
        int getRawBits( void ) const;
        void setRawBits ( int const raw );


        /* 
         * ========
         * ex01 ===
         * ========
         */

        /*
         * Constructor that accept an consts int as a parameter and
         * convert it to a value of 8:
         */

        Fixed(int const num); //int argument

        /*
         * Constructor that accept an float const as a parameter and
         * convert it to a fixed point (8)
         * the values of m_b it's inicialized as ex00:
         */
        
        Fixed(float const num_float); //float argument

        float toFloat (void) const;
        int toInt (void) const;

};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);


#endif