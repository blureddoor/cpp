/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 10:54:56 by lvintila          #+#    #+#             */
/*   Updated: 2022/11/13 13:25:18 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Default Constructor Called" << std::endl;
    this->type = "Cat";

}

Cat::Cat(Cat const & src)
{
    std::cout << "Cat Copy Contructor Called" << std::endl;
    *this = src;
}

Cat::~Cat()
{
    std::cout << "Cat Default Destructor Called" << std::endl;
}

Cat & Cat::operator=(const Cat & ref)
{
    std::cout << "Cat Assignament operator called" << std::endl;
    std::cout << ref << std::endl;
    return (*this);
}

void    Cat::makeSound() const
{
    std::cout << "Miaaou, Miaaou ...!!"<< std::endl;
}
