/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 10:55:16 by lvintila          #+#    #+#             */
/*   Updated: 2022/11/13 13:25:39 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Default Constructor Called" << std::endl;
    this->type = "Dog";
}

Dog::Dog(Dog const & src)
{
    std::cout << "Dog Copy Contructor Called" << std::endl;
    *this = src;
}

Dog::~Dog()
{
    std::cout << "Dog Default Destructor Called" << std::endl;
}

Dog & Dog::operator=(const Dog & ref)
{
    std::cout << "Dog Assignament operator called" << std::endl;
    std::cout << ref << std::endl;
    return (*this);
}

void   Dog::makeSound() const
{
    std::cout << "Wougf, Wougf ...!!"<< std::endl;
}
