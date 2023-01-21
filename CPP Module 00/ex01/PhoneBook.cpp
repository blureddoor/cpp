/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 21:55:06 by lvintila          #+#    #+#             */
/*   Updated: 2023/01/21 12:32:05 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "utils.hpp"
#include <iostream>
#include <iomanip>


PhoneBook::PhoneBook()
{
	m_capacity = 0;
}

/*
 * Add a new contact to the array, after checking if its full.
 */

void    PhoneBook::add()
{
	std::string input;

	if (m_capacity == MAX_CONTACTS)
	{
		std::cout << "The limit of " << MAX_CONTACTS
            << " contacts has been reached";
		std::cout << std::endl << "Do you wish to overwrite the first contact to ";
		std::cout << "record a new one?" << std::endl;
		do
		{
			std::cout << "[y/n] > ";
            getline(std::cin, input);
            ft_trim_n(input);
		}
		while (input.compare("y") != 0 && input.compare("n") != 0);
		
		if (input.compare("y") == 0)
		{
			write_last_del_first();
			m_capacity--;
		}
		else
			return;
	}
	contacts[m_capacity].read_contact();
	if (m_capacity < MAX_CONTACTS)
		m_capacity++;
}

/*
 * displays the table for the SEARCH functionality with a
 * resume of the stored contacts.
 */

void    PhoneBook::display_search_table()
{
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|" << std::setw(10) << "index" << "|" << std::setw(10)
        << "first name";
	std::cout << "|" << std::setw(10) << "last name" << "|" << std::setw(10)
        << "nickname";
	std::cout << "|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;

	for (int i = 0; i < m_capacity; i++)
	{
		std::cout << "|" << std::setw(10) << i << "|";
		std::cout << std::setw(10) << cut_and_dot(contacts[i].get_first_name()
            , 10);
		std::cout << "|" << std::setw(10)
            << cut_and_dot(contacts[i].get_last_name(), 10);
		std::cout << "|" << std::setw(10)
            << cut_and_dot(contacts[i].get_nickname(), 10);
		std::cout << "|" << std::endl;
		std::cout << "---------------------------------------------"
            << std::endl;
	}
}

/*
 * Show the user a table with the stored contacts and then it
 * prompts to select one to display its full data.
 */


void    PhoneBook::search()
{
	std::string input;
	bool index;

	if (m_capacity == 0)
	{
		std::cout << "No contacts stored yet" << std::endl;
		return;
	}
	
	display_search_table();

	index = false;
	while (!index)
	{
		std::cout << "Index > ";
		getline(std::cin, input);
		ft_trim_n(input);

		if (its_only_digits(input) && atoi(input.c_str()) < m_capacity)
			index = true;
		else
			std::cout << input << ": invalid index" << std::endl;
	}
	contacts[atoi(input.c_str())].display_contact();
}

/*
 * moves all the contacts one position down overwriting the first element wit
 * the new one.
 */

void    PhoneBook::write_last_del_first()
{
	for (int i = 1; i < MAX_CONTACTS; i++)
		contacts[i - 1] = contacts[i];
}

/*
 * loop that keeps asking the user for commands until an EXIT is introduced.
 */

void    PhoneBook::my_agenda()
{
	std::string input;
	bool cmd;

	std::cout << "Welcome to My Dummie-Fool Contacts Book !";
	std::cout << std::endl << "Available commands: ADD, SEARCH, EXIT"
        << std::endl;

	cmd = true;
	while (cmd && !std::cin.eof())
	{
		std::cout << "> ";
		getline(std::cin, input);
		ft_trim_n(input);

		if (input.compare("EXIT") == 0)
			cmd = false;
		else if (input.compare("ADD") == 0)
			add();
		else if (input.compare("SEARCH") == 0)
			search();
		else
		{
			std::cout << "Wrong command : " << input << std::endl;
            std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;
		}
	}
}

