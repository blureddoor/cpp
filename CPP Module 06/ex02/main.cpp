/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 12:04:10 by lvintila          #+#    #+#             */
/*   Updated: 2022/12/24 12:30:27 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Base {
	public:
		virtual ~Base() {}
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base	*generate( void )
{
	int	gen = rand() % 3;

	if (gen == 0)
    {
        std::cout << "generating A ..." << " Done!" << std::endl;
		return new A();
    }
	else if (gen == 1)
    {        
        std::cout << "generating B ..." << " Done!" << std::endl;
		return new B();
    }
	else if (gen == 2)
    {
        std::cout << "generating C ..." << " Done!" << std::endl;
		return new C();
    }
	else
		return (NULL);
}

void identify_from_pointer( Base * p )
{
    std::cout << "Identifying from pointer: ";
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "neither A or B or C" << std::endl;
}

void identify_by_reference( Base & p )
{
    std::cout << "Identifying by reference: ";
	if (dynamic_cast<A *>(&p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(&p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(&p))
		std::cout << "C" << std::endl;
	else
		std::cout << "neither A or B or C" << std::endl;
    std::cout<<std::endl;
}

int	main(void)
{
    srand(time(NULL));
	Base	*base;

	for (int i = 0; i < 10; i++)
	{
		base = generate();
		identify_from_pointer(base);
		identify_by_reference(*base);
		delete base;
	}
}