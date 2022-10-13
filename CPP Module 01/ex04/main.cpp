/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 22:13:20 by lvintila          #+#    #+#             */
/*   Updated: 2022/10/13 22:23:25 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <fstream>

void    ft_replace(std::string *line, std::string to_r, std::string r_w)
{
	size_t	start_pos;

	while ((start_pos = (*line).find(to_r)) != std::string::npos)
	{
		(*line).erase(start_pos, to_r.length());
		(*line).insert(start_pos, r_w);
	}
}

int	main(int argc, char **argv)
{
	if (argc != 4 || !argv[2][0] || !argv[3][0])
	{
		std::cout << "Error: Arguments not valid" << std::endl;
		return (-1);
	}
	// input filestream
	// alternative:
	// fstream file;
	// file.open("test.txt", ios :: in);
	std::ifstream	ifs(argv[1]);
	if (!ifs.is_open())
	{
		std::cout << "Coulnd't open the input file" << std::endl;
		return (-1);
	}
	std::string	file_name = (std::string)argv[1] + ".replace";
	/*
     * output filestream
	 * alternative:
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
		// Not add \n at the end of the file
		if (!std::cin.eof())
			ofs << line_read << std::endl;
	}
	ofs.close();
	ifs.close();
}