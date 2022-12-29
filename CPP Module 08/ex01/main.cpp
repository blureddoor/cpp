/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 18:59:17 by lvintila          #+#    #+#             */
/*   Updated: 2022/12/29 20:51:19 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <iostream>
#include "span.hpp"


int main()
{
	Span sp = Span(5);

	sp.addNumber(5);


	
	std::cout << "shortest: " << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
    std::cout << "longest:" << std::endl;
	std::cout << sp.longestSpan() << std::endl;
    std::cout << std::endl;
    sp.printContent();
    
	//Long test
	Span sp1 = Span(200);

	srand(time(NULL));
	for (int i = 0; i < 200; i++)
		sp1.addNumber(rand() % 199);
  
    std::cout << "shortest: " << std::endl;  
	std::cout << sp1.shortestSpan() << std::endl;
    std::cout << "longest:" << std::endl;
	std::cout << sp1.longestSpan() << std::endl;
    std::cout << std::endl;
    sp1.printContent();
    
}


/*
int main()
{
Span sp = Span(5);
sp.addNumber(5);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
}
*/


