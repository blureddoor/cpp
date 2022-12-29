/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 18:59:25 by lvintila          #+#    #+#             */
/*   Updated: 2022/12/29 21:27:23 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>
#include <string>
/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span()
{
	std::cout << "Span Default Constructor Called" << std::endl;
}

Span::Span( const Span & src )
{
	*this = src;
	std::cout << "Span Copy Constructor Called" << std::endl;
}

Span::Span(unsigned int size)
{
	this->m_vector.reserve(size);
	std::cout << "Span ReservedSize Constructor Called" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
	std::cout << "Span Destructor Called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &			Span::operator=( Span const & rhs )
{
	this->m_vector.assign(rhs.m_vector.begin(), rhs.m_vector.end());
	return *this;
}


std::ostream &			operator<<( std::ostream & o, Span const & instance )
{
	(void)instance;
	o << "Instance = " << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Span::addNumber(int numAdded)
{
		if (m_vector.size() < m_vector.capacity())
		{
			this->m_vector.push_back(numAdded);		
			std::cout << " added." << std::endl;
		}
		else
			throw Span::SpanOverSizeException();
}

unsigned int	Span::shortestSpan()
{
	sort(m_vector.begin(), m_vector.end());
	if (m_vector.empty() == true || m_vector.size() == 1)
	{	
		std::cout << " from shortestSpan." << std::endl;
		throw Span::NoSpanException();
		return (0);
	}
	else
	{
		return (this->m_vector.at(1) - this->m_vector.at(0));
	}
}

unsigned int Span::longestSpan()
{	
	if (m_vector.empty() == true || m_vector.size() == 1)
	{
		std::cout << " from longestSpan." << std::endl;
		throw Span::NoSpanException();
		return (0);
	}
	else
	{
		sort(m_vector.begin(), m_vector.end());
		return (this->m_vector.at(this->m_vector.size() - 1)
			- this->m_vector.at(0));
	}
}

void Span::printContent(void)
{

//	for (unsigned int i = 0; i < this->m_vector.size(); i++)
//		std::cout << m_vector[i] << std::endl;	
	std::vector<int>::iterator it = this->m_vector.begin();

	for (;it != this->m_vector.end(); ++it)
		std::cout << *it << ", ";
	std::cout << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/*
** --------------------------------- EXCEPTION CLASS ---------------------------------
*/

const char * Span::SpanOverSizeException::what() const throw()
{
	return "Exception: Span overSize";
}
const char * Span::NoSpanException::what() const throw()
{
	return "Exception: Impossible to calculate Span";
}

/* ************************************************************************** */