/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:50:56 by lvintila          #+#    #+#             */
/*   Updated: 2022/12/10 12:49:08 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main( void )
{
    int amount_1 = 100;
    int amount_2 = 12;
    int amount_3 = 73;
    int amount_4 = 69;
    try
    {
        Bureaucrat b = Bureaucrat("Leo", 1);
        std::cout << b << std::endl;
        b.getGrade();
        std::cout << "1. " << b << std::endl;
        std::cout << "2. " << b.getName() << " have increased " << amount_1 << " grades" << std::endl;
        b.incGrade(amount_1);
        std::cout << "2. " << b << std::endl;
        std::cout << "3. " << b.getName() << " have increased " << amount_2 << " grades" << std::endl;
        b.incGrade(amount_2);
        std::cout << "3. " << b << std::endl;
        std::cout << "4. Oops " << b.getName() << " have decreased " << amount_3 << " grades" << std::endl;
        b.decGrade(amount_3);
        std::cout << "4. " << b << std::endl;
        std::cout << "5. " << b.getName() << " have increased " << amount_4 << " grades" << std::endl;
        b.incGrade(amount_4);
        std::cout << "5. " << b << std::endl;
        std::cout << "Congratulations!! The final grade is: " << b.getGrade() << std::endl;
    }
    catch(const std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    
	
	return (0);
}