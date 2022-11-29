/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 20:20:36 by lvintila          #+#    #+#             */
/*   Updated: 2022/11/29 19:59:29 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#ifndef CONTACT_HPP
#define CONTACT_HPP

class Contact
{
	private:
		std::string m_first_name;
		std::string m_last_name;
		std::string m_nickname;
		std::string m_phone_number;
		std::string m_darkest_secret;

		bool is_valid_phone_number();
	public:
		Contact();

		void read_contact();
		void display_contact();

		// Getters
		std::string get_first_name();
		std::string get_last_name();
		std::string get_nickname();
		std::string get_phone_number();
		std::string get_darkest_secret();
};

#endif