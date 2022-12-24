/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 10:43:48 by lvintila          #+#    #+#             */
/*   Updated: 2022/12/24 11:24:05 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"


int main(int argc, char **argv)
{
	if (argc == 2)
	{
        Convert value(argv[1]);
        value.printChar(argv[1]);
        value.printInt(argv[1]);
		value.printFloat(argv[1]);
        value.printDouble(argv[1]);
	}
	else
		std::cout << "Error: only one argument allowed" << std::endl;
	return (0);
}