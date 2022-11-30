/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 19:03:20 by lvintila          #+#    #+#             */
/*   Updated: 2022/11/30 20:34:30 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat()
{
}



Bureaucrat::Bureaucrat(const std::string name, unsigned int grade):m_name(name), m_grade(grade) {
	try
	{
		if (this->m_grade > 150)
			throw Bureaucrat::GradeTooLowException();
	//	this->m_grade = 150;
	}
	catch(const std::exception & e)
	{
		std::cout << "This is an inicial grade too LowException" << std::endl;
	}
	try
	{
		if (this->m_grade < 1)
			throw Bureaucrat::GradeTooHighException();
	//	this->m_grade = 1;
	}
	catch(const std::exception & e)
	{
		std::cout << "This is an inicial grade too HighException" << std::endl;
	}
}



Bureaucrat::Bureaucrat( const Bureaucrat & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor Called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if ( this != &rhs )
	{
		this->m_grade = rhs.getGrade();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat & instance )
{
	o << instance.getName() << ", bureaucrat grade" << instance.getGrade();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
	void				getName();
	void				getGrade();
	void				incGrade();
	void				decGrade();
	void				gradeTooHighException();
	void				gradeTooLowException();
*/
std::string		Bureaucrat::getName (void) const
{
	return(this->m_name);
}

unsigned int	Bureaucrat::getGrade(void) const
{
	return (this->m_grade);
}

/*
const char *Bureaucrat::GradeTooHighException::what();
{
	return "There is no highest grade, 1 is the best";
}

const char *Bureaucrat::GradeTooLowException::what();
{
	return "Sorry, you reach the lowest grade";
}
*/

void	Bureaucrat::incGrade(int grade)
{
	try
	{
		if (this->m_grade - grade <= 0)
			throw Bureaucrat::GradeTooHighException();
		else
			this->m_grade -= grade;
	}
	catch(std::exception & e)
	{
		std::cout << "This is an exception" << std::endl;
	}

}

void	Bureaucrat::decGrade(int grade)
{
	try
	{
		if (this->m_grade - grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else
			this->m_grade += grade;
	}
	catch(std::exception & e)
	{
		std::cout << "This is an exception" << std::endl;
	}
}




/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */