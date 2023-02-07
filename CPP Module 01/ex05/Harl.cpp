/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 20:00:07 by lvintila          #+#    #+#             */
/*   Updated: 2023/01/10 18:37:31 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
}

void Harl::complain(std::string level)
{
	for (int i = 0; i < 4 ; i++)
	{
		std::string levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
		void (Harl::*f[4])() = { &Harl::debug, &Harl::info, &Harl::warning,
			&Harl::error };
		if (levels[i] == level)
			(this->*f[i])();
	}
}

void    Harl::debug(void)
{
    std::cout << "[ DEBUG ] " << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-";
	std::cout << "pickle-special-ketchup burger. I really do!" << std::endl;
}

void    Harl::info(void)
{
	std::cout << std::endl;
    std::cout << "[ INFO ] " << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money.";
	std::cout << std::endl;
	std::cout << "You don’t put enough bacon in my burguer! If you did,";
	std::cout << " I wouldn't be asking for more!" << std::endl;
}

void    Harl::warning(void)
{
	std::cout << std::endl;
    std::cout << "[ WARNING ] " << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << std::endl;
	std::cout << "I’ve been coming here for years whereas you started working";
	std::cout << " here since last month." << std::endl;
	
}

void    Harl::error(void)
{
	std::cout << std::endl;
    std::cout << "[ ERROR ] " << std::endl;
	std::cout << "This is unacceptable! I want to speak to";
	std::cout << " the manager now." << std::endl;

}

