/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 12:34:19 by lvintila          #+#    #+#             */
/*   Updated: 2022/11/16 20:43:12 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "----------------------------- " << std::endl;
	std::cout << "----------------------------- " << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* wr_meta = new WrongAnimal();
	const WrongAnimal* wr_i = new WrongCat();
	std::cout << "----------------------------- " << std::endl;
	std::cout << "----------------------------- " << std::endl;
	
	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << "----------------------------- " << std::endl;
	std::cout << "----------------------------- " << std::endl;
	
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << "----------------------------- " << std::endl;
	std::cout << "----------------------------- " << std::endl;
	
	std::cout << wr_meta->getType() << std::endl;
	std::cout << wr_i->getType() << std::endl;
	std::cout << "----------------------------- " << std::endl;
	std::cout << "----------------------------- " << std::endl;
	
	wr_meta->makeSound();
	wr_i->makeSound();
	std::cout << "----------------------------- " << std::endl;
	std::cout << "----------------------------- " << std::endl;
	
	delete wr_meta;
	delete wr_i;
	std::cout << "----------------------------- " << std::endl;
	std::cout << "----------------------------- " << std::endl;
	
	delete i;
	delete j;
	delete meta;
    return (0);
}