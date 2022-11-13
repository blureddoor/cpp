/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 10:54:56 by lvintila          #+#    #+#             */
/*   Updated: 2022/11/13 15:20:26 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Default Constructor Called" << std::endl;
    this->type = "Cat";
    this->m_brain = new Brain;

}

Cat::Cat(Cat const & src)
{
    std::cout << "Cat Copy Contructor Called" << std::endl;
    *this = src;
}

Cat::~Cat()
{
    std::cout << "Cat Default Destructor Called" << std::endl;
    delete this->m_brain;
}

Cat & Cat::operator=(const Cat & ref)
{
    std::cout << "Cat Assignament operator called" << std::endl;
    this->type = ref.getType();
    *(this->m_brain) = *(ref.getBrain());
    return (*this);
}

Animal & Cat::operator=(const Animal & ref)
{
    std::cout << "Animal Assignament operator for Cat called" << std::endl;
    this->type = ref.getType();
    *(this->m_brain) = *(ref.getBrain());
    return (*this);
}

void    Cat::makeSound() const
{
    std::cout << "Miaaou, Miaaou ...!!"<< std::endl;
}

Brain   *Cat::getBrain() const 
{
    return(this->m_brain);
}
