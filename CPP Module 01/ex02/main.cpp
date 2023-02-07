/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:37:26 by lvintila          #+#    #+#             */
/*   Updated: 2023/02/07 21:00:26 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	// String variable
	std::string str = "HI THIS IS BRAIN";

	// String's address / pointer
	std::string *stringPTR = &str;

	// A reference to the string
	// Always constant and not NULL
	// As with const variables, assignation during initialization is needed
	std::string	&stringREF = str;
	
	// Display the address
	std::cout << std::endl;
	
	std::cout << "Address of the string:" << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	std::cout << "	String memory address:				" << &str << std::endl;
	std::cout << "	String memory adress contained in stringPTR: 	" << stringPTR << std::endl;
	std::cout << "	String memory adress contained in stringREF: 	" << &stringREF << std::endl;

	// Display the value
	std::cout << std::endl;

	std::cout << "Value of the string:	" << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	std::cout << "	String value:					" << str << std::endl;
	std::cout << "	String value pointed to by stringPTR: 		" << *stringPTR << std::endl;
	std::cout << "	String value pointed to by stringREF: 		"<< stringREF << std::endl;
	
	std::cout << std::endl;
	return (0);
}