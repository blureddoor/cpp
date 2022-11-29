/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 22:57:38 by lvintila          #+#    #+#             */
/*   Updated: 2022/11/29 19:51:53 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void): AMateria("ice")
{}

Ice::Ice(std::string const & type): AMateria("Ice")
{
	(void)type;
}

Ice::Ice(Ice const & cpy): AMateria(cpy)
{}

Ice::~Ice(void)
{}

Ice & Ice::operator=(Ice const & rhs)
{
	(void)rhs;
	return (*this);
}

Ice *	Ice::clone(void) const
{
	Ice * new_ice = new Ice("ice");

	return new_ice;
}

void	Ice::use(ICharacter& target)
{
	this->setXP();
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}