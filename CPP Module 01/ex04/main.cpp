/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 22:13:20 by lvintila          #+#    #+#             */
/*   Updated: 2023/02/07 21:37:36 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <fstream>
#include "ft_replace.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4 || !argv[2][0] || !argv[3][0])
	{
		std::cout << "Error: Arguments not valid" << std::endl;
		return (-1);
	}
	/*
	
	 * input filestream alternative:
	 * fstream file;
	 * file.open("test.txt", ios :: in);
	 */
	std::ifstream	ifs(argv[1]);
	if (!ifs.is_open())
	{
		std::cout << "Coulnd't open the input file" << std::endl;
		return (-1);
	}
	std::string	file_name = (std::string)argv[1] + ".replace";
	/*
     * output filestream alternative:
	 * fstream file;
	 * file.open("test.txt", ios :: out);
     */
	std::ofstream	ofs(file_name);
	if (!ofs.is_open())
	{
		std::cout << "Coulnd't open the output file" << std::endl;
		return (-1);
	}
	std::string	line_read;
	std::string	to_replace = argv[2];
	std::string	replace_with = argv[3];
	while (getline(ifs, line_read))
	{
		ft_replace(&line_read, to_replace, replace_with);
		/*
		 * Don't add "\n" at the end of the file
		 */
		if (!std::cin.eof())
			ofs << line_read << std::endl;
	}
	ofs.close();
	ifs.close();
}