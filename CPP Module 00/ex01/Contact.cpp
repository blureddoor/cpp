/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 20:01:05 by lvintila          #+#    #+#             */
/*   Updated: 2023/01/21 12:32:52 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include "utils.hpp"


Contact::Contact()
{
	m_first_name.clear();
	m_last_name.clear();
	m_nickname.clear();
	m_phone_number.clear();
	m_darkest_secret.clear();
}

/*
 * check if a string is not empty 
 */

bool Contact::is_valid_str(std::string str)
{
	if (str.compare("") == 0)
		return false;
	return true;
}

/*
 * check if m_phone_number has a valid lenght and
 * is only composed by digits.
 */

bool    Contact::is_valid_phone_number()
{
	if (m_phone_number.length() != 9)
		return (false);
	for (size_t i = 0; i < m_phone_number.length(); i++)
		if (!isdigit(m_phone_number[i]))
			return (false);
	return (true);
}

/*
 * prompts the user to fill all the fields of the class.
 */
void    Contact::read_contact()
{
	do
	{
		std::cout << "First name: ";
		getline(std::cin, m_first_name);
		ft_trim_n(m_first_name);
	}
	while (!std::cin.eof() && !is_valid_str(m_first_name));

	do
	{
		std::cout << "Last name: ";
		getline(std::cin, m_last_name);
		ft_trim_n(m_last_name);
	} 
	while (!std::cin.eof() && !is_valid_str(m_last_name));
	
	do
	{
		std::cout << "Nickname: ";
		getline(std::cin, m_nickname);
		ft_trim_n(m_nickname);
	}
	while (!std::cin.eof() && !is_valid_str(m_nickname));

	do
	{
		std::cout << "Phone number: ";
		getline(std::cin, m_phone_number);
	}
	while (!std::cin.eof() && !is_valid_phone_number());

	do
	{
		std::cout << "Darkest secret: ";
		getline(std::cin, m_darkest_secret);
		ft_trim_n(m_darkest_secret);
	}
	while (!std::cin.eof() && !is_valid_str(m_darkest_secret));

}

/*
 * display all the fields of the class.
 */
void    Contact::display_contact()
{
	std::cout << "First name: " << m_first_name << std::endl;
	std::cout << "Last name: " << m_last_name << std::endl;
	std::cout << "Nickname: " << m_nickname << std::endl;
	std::cout << "Phone number: " << m_phone_number << std::endl;
	std::cout << "Darkest secret: " << m_darkest_secret << std::endl;
}

std::string  Contact::get_first_name()
{
	return (m_first_name);
}

std::string  Contact::get_last_name()
{
	return (m_last_name);
}

std::string  Contact::get_nickname()
{
	return (m_nickname);
}

std::string  Contact::get_phone_number()
{
	return (m_phone_number);
}

std::string  Contact::get_darkest_secret()
{
	return (m_darkest_secret);
}

