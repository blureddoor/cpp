/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 22:01:35 by lvintila          #+#    #+#             */
/*   Updated: 2023/01/08 13:29:11 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
# include <iostream>
# include <string>
# include "Contact.hpp"

#define MAX_CONTACTS 8

class PhoneBook
{
	private:
		Contact contacts[MAX_CONTACTS];
		int m_capacity;

	public:
		PhoneBook();
		void add();
		void display_search_table();
		void search();
		void rec_and_del_first();
		void dumf_loop();
};

#endif
