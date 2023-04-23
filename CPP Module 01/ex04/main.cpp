/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 22:13:20 by lvintila          #+#    #+#             */
/*   Updated: 2023/04/23 11:35:19 by lvintila         ###   ########.fr       */
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
		std::cerr << "Usage: " << argv[0] << " <input_file> <string_to_replace> <string replace with>" << std::endl;
		return (-1);
	}
	
	
	std::ifstream	ifs(argv[1]); // Create an instance of ifstream called ifs which contain "argv[1]" file
	if (!ifs)
	{
		std::cerr << "Error: coulnd't open the input file " << argv[1] << std::endl;
		return (-1);
	}
	/*
	 * Converts the first argument passed on the command line, which is a character array,
	 * to an object of type "std::string"
	 */
	
	std::string	file_name = (std::string)argv[1] + ".replace";
	
	std::ofstream	ofs(file_name);
	if (!ofs)
	{
		std::cerr << "Error: coulnd't open the output file" << file_name << std::endl;
		return (-1);
	}
	std::string	line_read;
	std::string	s1(argv[2]);
	std::string	s2(argv[3]);
	if (s1.empty() || s2.empty() || s1 == s2)
	{
		std::cerr << "Error: invalid string arguments" << std::endl;
		return -1;
	}
	while (getline(ifs, line_read))
	{
		ft_replace(line_read, s1, s2);	
		if (!std::cin.eof()) // Check if stdin still has data to read
			ofs << line_read << std::endl;
	}
	ofs.close();
	ifs.close();
	std::cout << "Done!" << std::endl;
	return 0;
}