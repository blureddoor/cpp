/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 21:50:37 by lvintila          #+#    #+#             */
/*   Updated: 2022/10/16 12:34:32 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
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
*/

int	main(void)
{
	Zombie zombie("Tracy		via manual");
	zombie.announce();
	std::cout << std::endl;

	
	Zombie *z = newZombie("RagnaRock	via newZombie");
	z->announce();
	std::cout << std::endl;
	
	randomChump("TarikBauman	via randomChump");
	std::cout << std::endl;
	
	delete z;
}