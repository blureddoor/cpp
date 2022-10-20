/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 23:01:29 by lvintila          #+#    #+#             */
/*   Updated: 2022/10/20 23:22:47 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): m_x(0), m_y(0)
{
}

Point::~Point()
{
}
		
Point::Point(Point const & p): m_x(p.getX()), m_y(p.getY())
{

}

Point::Point(float const x, float const y): m_x(x), m_y(y)
{
}

Point::Point(Fixed const x, Fixed const y): m_x(x), m_y(y)
{
}

Point & Point::operator=( Point & rhs)
{
	return (rhs);
}

Fixed	Point::getX( void ) const
{
	return (this->m_x);
}

Fixed	Point::getY( void ) const
{
	return (this->m_y);
}