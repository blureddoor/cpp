/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 12:58:18 by lvintila          #+#    #+#             */
/*   Updated: 2022/12/24 13:03:24 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "iter.hpp"

template<typename T>
void	iter(T *array, int arraySize, void (*fctToExecute)(const T &))
{
	for (int i = 0; i < arraySize; i++)
		fctToExecute(array[i]);
}

template<typename T>
void	display( T &whatever )
{
	std::cout << "Variable's value is: " << whatever << std::endl;
}

void	setRandomValue( int &number )
{
	number = std::rand() % 100;
}

int	main( void )
{
	std::string	strTable[3];
	int			*intTable = new int[5];

	strTable[0] = "Hi how are you?";
	strTable[1] = "Fine, and you dear sir?";
	strTable[2] = "Very fine indeed!";
	::iter(strTable, 3, &display);
	for (int i = 0; i < 9; i ++)
		setRandomValue(intTable[i]);
	::iter(intTable, 9, &display);
}