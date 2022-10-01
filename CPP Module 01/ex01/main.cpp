/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:41:39 by lvintila          #+#    #+#             */
/*   Updated: 2022/10/01 13:42:42 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
int	main( void )
{
	std::cout << "Creating the first Zombie, Robert, \"manually\"" << std::endl;
	{
		Zombie	robert("Robert");
		robert.announce();
	}
	std::cout << "Creating the second Zombie, Georges, using the function"
		" newZombie"<< std::endl;
	{
		Zombie	*georges = newZombie("Georges");
		georges->announce();

		delete georges;
	}
	{
		std::cout << "Creating the third Zombie, Mark, using the function"
			" randomChump"<< std::endl;
		randomChump("Mark");
	}
}

*/
int	main( void )
{
	std::cout << "Creating the first +zombie+, Robert, \"manually\""
		<< std::endl;
	{
		Zombie	robert("Robert");
		robert.announce();
	}
	std::cout << "Creating the second +zombie+, Georges, using the function"
		" newZombie"<< std::endl;
		Zombie	*georges = newZombie("Georges");
		georges->announce();
		delete georges;
	std::cout << "Creating the third +zombie+, Mark, using the function"
			" randomChump"<< std::endl;
		randomChump("Mark");
}