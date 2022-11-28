/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 12:34:19 by lvintila          #+#    #+#             */
/*   Updated: 2022/11/16 20:46:10 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

// int main()
// {
// const Animal* j = new Dog();
// const Animal* i = new Cat();
// delete j;//should not create a leak
// delete i;
// system("leaks animal");
// return (0);
// }

#define NUMBER_OF_ANIMALS 8

int	main( void )
{
	Animal	*animals[NUMBER_OF_ANIMALS];
	Brain	*brain = NULL;

	
	for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
	{
		if (i < NUMBER_OF_ANIMALS / 2)
		{
			animals[i] = new Dog();
			brain = animals[i]->getBrain();
			brain->ideas[0] = "Ball ... !!!!";
			
		}
		else
		{
			animals[i] = new Cat();
			brain = animals[i]->getBrain();
			brain->ideas[0] = "I'm hungry !!!!!";
		}
		std::cout << i << ". I'm a " << animals[i]->getType() << ". And just have an idea: " << animals[i]->getBrain()->ideas[0] << std::endl;
	}
	brain->ideas[1] = "That's a strange idea I'm having";
	brain->ideas[2] = "Ball!!!";
	brain->ideas[3] = "Squirrel!!!!!";

	brain = animals[7]->getBrain();
	std::cout << "1. ========================" << std::endl;
	// delete animals[0];
	std::cout << "I'm a " << animals[2]->getType() << ". And just have an idea: " << animals[2]->getBrain()->ideas[0] << std::endl;
	std::cout << "2. ========================" << std::endl;
	std::cout << "I'm a " << animals[2]->getType() << std::endl;
	*(animals[2]) = *(animals[7]);
	std::cout << "now I'm a " << animals[2]->getType() << std::endl;
	std::cout << "3. ========================" << std::endl;
	for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
	{
		brain = animals[i]->getBrain();
		std::cout << animals[i]->getBrain()->ideas[0] << std::endl;
	}
	std::cout << "I'm a " << animals[7]->getType() << ". And just have an idea: " << animals[7]->getBrain()->ideas[1] << std::endl;
	std::cout << "4. ========================" << std::endl;
	std::cout << "I'm still a " << animals[2]->getType() << std::endl;
	
	for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
		delete animals[i]; 
	system("leaks animal");
	
	return (0);
}