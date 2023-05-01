/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 21:50:37 by lvintila          #+#    #+#             */
/*   Updated: 2023/05/01 10:59:23 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl h;
	
	if (argc == 1 || argc > 2)
	{
		std::cerr << "Error: invalid argument(s)" << std::endl;
		return -1;
	}
	//	exit(1);
	h.complain(argv[1]);
	return 0;
}