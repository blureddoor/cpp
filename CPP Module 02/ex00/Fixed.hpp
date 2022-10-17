#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <string>



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
        int m_w;
        static const int m_b = 8;

    public:
        /*
         * Constructor
         */
        Fixed();
        /*
         * Destructor
         */
        ~Fixed();
        /*
         * Copy Constructor
         * a constructor which allows to create a copy of different instance
         */
        Fixed(Fixed const &src);

        /* 
         * Operator '=' overload
		 * rhs = right hand side, a constant reference to our oject instance
		 * not a const function because our instance will be modified (ex: a = 14)
		 * Returns a reference to allow us to do "a = b = c = d"
         */

        Fixed &operator = (Fixed const & rhs);
        int getRawBits( void ) const;
        void setRawBits ( int const raw );
};


#endif