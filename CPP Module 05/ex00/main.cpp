/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:50:56 by lvintila          #+#    #+#             */
/*   Updated: 2022/11/30 20:25:34 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// int main()
// {
// const Animal* j = new Dog();
// const Animal* i = new Cat();
// delete j;//should not create a leak
// delete i;
// system("leaks animal");
// return (0);
// }


int	main( void )
{
    Bureaucrat b("Leo", 151);
    std::cout << "Oops " << b.getName() << " have " << b.getGrade() << " grade" << std::endl;
    b.getGrade();
    std::cout << "Oops " << b.getName() << " have " << b.getGrade() << " grade" << std::endl;
    b.incGrade(100);
    b.getGrade();
    std::cout << "Oops " << b.getName() << " have " << b.getGrade() << " grade" << std::endl;
    b.incGrade(52);
    b.getGrade();
    std::cout << "Oops " << b.getName() << " have " << b.getGrade() << " grade" << std::endl;
    b.incGrade(100);
    std::cout << "Oops " << b.getName() << " have " << b.getGrade() << " grade" << std::endl;
	
	return (0);
}


/*
int main(void)
{
	Bureaucrat dmv("Leo", 151);

	//increment to 145
	dmv.incGrade(5);
	std::cout << dmv.getName() << "'s grade: " << dmv.getGrade() << std::endl;
	//decrement to 149
	dmv.decGrade(4);
	std::cout << dmv.getName() << "'s grade: " << dmv.getGrade() << std::endl;
	//grade too low exception
	dmv.decGrade(10);
	std::cout << dmv.getName() << "'s grade: " << dmv.getGrade() << std::endl;

	return (0);
}

*/