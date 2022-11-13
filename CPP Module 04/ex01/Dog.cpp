/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 10:55:16 by lvintila          #+#    #+#             */
/*   Updated: 2022/11/13 15:16:26 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Default Constructor Called" << std::endl;
    this->type = "Dog";
    this->m_brain = new Brain;
}

Dog::Dog(Dog const & src)
{
    std::cout << "Dog Copy Contructor Called" << std::endl;
    *this = src;
}

Dog::~Dog()
{
    std::cout << "Dog Default Destructor Called" << std::endl;
    delete this->m_brain;
}

Dog & Dog::operator=(const Dog & ref)
{
    std::cout << "Dog Assignament operator called" << std::endl;
    this->type = ref.getType();
    *(this->m_brain) = *(ref.getBrain());
    return (*this);
}

Animal & Dog::operator=(const Animal & ref)
{
    std::cout << "Animal Assignament operator for Dog called" << std::endl;
    this->type = ref.getType();
    *(this->m_brain) = *(ref.getBrain());
    return (*this);
}

void   Dog::makeSound() const
{
    std::cout << "Wougf, Wougf ...!!"<< std::endl;
}

Brain *Dog::getBrain() const
{
    return(this->m_brain);
}
