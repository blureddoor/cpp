/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 12:48:32 by lvintila          #+#    #+#             */
/*   Updated: 2022/11/13 14:24:04 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat Default Constructor Called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const & src)
{
    std::cout << "WrongCat Copy Contructor Called" << std::endl;
    *this = src;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Default Destructor Called" << std::endl;
}

WrongCat & WrongCat::operator=(const WrongCat & ref)
{
    std::cout << "WrongCat Assignament operator called" << std::endl;
    std::cout << ref << std::endl;
    return (*this);
}

void    WrongCat::makeSound() const
{
    std::cout << "WrongMiaaou, WrongMiaaou ...!!"<< std::endl;
}