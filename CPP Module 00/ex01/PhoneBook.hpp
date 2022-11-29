/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dumf.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 22:01:35 by lvintila          #+#    #+#             */
/*   Updated: 2022/11/29 20:05:02 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

#define MAX_CONTACTS 8

class PhoneBook
{
	private:
		Contact contacts[MAX_CONTACTS];
		int in_use;

		void add();
		void display_search_table();
		void search();
		void rec_and_del_first();
	public:
		PhoneBook();
		void dumf_loop();
};

#endif
