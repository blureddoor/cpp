/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 20:23:01 by lvintila          #+#    #+#             */
/*   Updated: 2023/01/10 22:04:34 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	init();
}

void Harl::init(void)
{
	m_status[0].m_name = "DEBUG";
	m_status[0].ptr = &Harl::debug;
	m_status[1].m_name = "INFO";
	m_status[1].ptr = &Harl::info;
	m_status[2].m_name = "WARNING";
	m_status[2].ptr = &Harl::warning;
	m_status[3].m_name = "ERROR";
	m_status[3].ptr = &Harl::error;
}

/*
void Harl::complain(std::string level)
{
	bool	check_level = false;

	for (int i = 0; i < 4 ; i++)
	{
		if (check_level || m_status[i].m_name == level)
		{
			(this->*(m_status[i].ptr))();
			check_level = true;
//			std::cout << &m_status[0].m_name << std::endl;
		}
	}
	if (check_level == false)
		etc();
}
*/

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
	std::cout << "I cannot believe adding extra bacon cost more money." << std::endl;
	std::cout << "You don’t put enough bacon in my burguer! If you did, I wouldn't be asking for more!"<< std::endl;
	std::cout << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "[ WARNING ] " << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming here for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
}

void    Harl::error(void)
{
    std::cout << "[ ERROR ] " << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now."<< std::endl;
	std::cout << std::endl;
}

void	Harl::etc(void)
{
	std::cout << "[ Probably complaining about insignificant problems ]"
		<< std::endl;
		std::cout << std::endl;
}