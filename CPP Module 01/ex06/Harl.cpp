/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 20:23:01 by lvintila          #+#    #+#             */
/*   Updated: 2023/01/22 13:04:20 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	m_status[0].m_name = "DEBUG";
	m_status[1].m_name = "INFO";
	m_status[2].m_name = "WARNING";
	m_status[3].m_name = "ERROR";
}

void Harl::complain(std::string level)
{
	int opcion = 0;
	int i = 0;
	while (i < 4)
	{
		if(m_status[i++].m_name == level)
			opcion = i;
	}
	switch(opcion)
	{
		case 1 : debug();info();warning();error();
			break;
		case 2: info();warning();error();
			break;
		case 3: warning();error();
			break;
		case 4: error();
			break;
		default: etc();
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

void	Harl::etc(void)
{
	std::cout << "[ Probably complaining about insignificant problems ]"
		<< std::endl;
}