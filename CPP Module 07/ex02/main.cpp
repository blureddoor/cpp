/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 10:31:04 by lvintila          #+#    #+#             */
/*   Updated: 2022/12/26 10:32:34 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void)
{
	Array<int> test(10);
	unsigned int size = test.size();

	std::cout << "test size: " << size << std::endl;
	for (unsigned int i = 0; i < size; i++)
		test[i] = static_cast<int>(size) - static_cast<int>(i);
	for (unsigned int i = 0; i < size; i++)
		std::cout << "test[" << i << "] = " << test[i] << std::endl;

	Array<int> test1;

	std::cout << std::endl << "test1 size: " << test1.size() << std::endl;

	return 0;
}