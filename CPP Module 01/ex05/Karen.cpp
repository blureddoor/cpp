/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 20:00:07 by lvintila          #+#    #+#             */
/*   Updated: 2023/01/08 13:28:53 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{
	init();
}

void Karen::init(void)
{
	status[0].m_name = "debug";
	status[0].ptr = &Karen::debug;
	status[1].m_name = "info";
	status[1].ptr = &Karen::info;
	status[2].m_name = "warning";
	status[2].ptr = &Karen::warning;
	status[3].m_name = "error";
	status[3].ptr = &Karen::error;
}

void Karen::complain(std::string level)
{
	for (int i = 0; i < 4 ; i++)
	{
		if (status[i].m_name == level)
		{
			(this->*(status[i].ptr))();
		}
	}
}

void    Karen::debug(void)
{
	std::cout << std::endl;
    std::cout << "[ DEBUG ] " << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!." << std::endl;
}

void    Karen::info(void)
{
	std::cout << std::endl;
    std::cout << "[ INFO ] " << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!." << std::endl;
}

void    Karen::warning(void)
{
	std::cout << std::endl;
    std::cout << "[ WARNING ] " << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void    Karen::error(void)
{
	std::cout << std::endl;
    std::cout << "[ ERROR ] " << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}