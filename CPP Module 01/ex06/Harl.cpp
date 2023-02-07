/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 20:23:01 by lvintila          #+#    #+#             */
/*   Updated: 2023/02/07 23:25:36 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{}

void Harl::complain(std::string level)
{
	std::string levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	int i;
	for ( i = 0; i < 4; i++ )
	{
		if(levels[i] == level)
			break;
	}
	switch(i)
	{
		case 0 : 
			this->debug();
		case 1: 
			this->info();
		case 2: 
			this->warning();
		case 3: 
			this->error();
			break;
		default:
			std::cout << "[ Probably complaining about insgnificant" 
				" problems ] " << std::endl;
	}
}

void    Harl::debug(void)
{
    std::cout << "[ DEBUG ] " << std::endl;
	std::cout << "I love having bacon for my 7XL-double-cheese_triple-"
		"pickle-special-ketchup burger. I really do!" << std::endl;
	std::cout << std::endl;
}

void    Harl::info(void)
{
    std::cout << "[ INFO ] " << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money.";
	std::cout << std::endl;
	std::cout << "You didn’t put enough bacon in my burguer! If you did,";
	std::cout << " I wouldn't be asking for more!"<< std::endl;
	std::cout << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "[ WARNING ] " << std::endl;
	std::cout << "I think I deserve to have some extra bacon";
	std::cout << " for free." << std::endl;
	std::cout << "I’ve been coming for years whereas you";
	std::cout << " started working here since last month." << std::endl;
	std::cout << std::endl;
}

void    Harl::error(void)
{
    std::cout << "[ ERROR ] " << std::endl;
	std::cout << "This is unacceptable, I want to speak";
	std::cout << " to the manager now."<< std::endl;
	std::cout << std::endl;
}