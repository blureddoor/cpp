/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 19:03:20 by lvintila          #+#    #+#             */
/*   Updated: 2022/12/11 09:14:48 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat()
{
}



Bureaucrat::Bureaucrat(const std::string &name,  int grade):m_name(name), m_grade(grade) 
{
	
		if (grade > 150)	
			throw Bureaucrat::GradeTooLowException();
		else if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
			
/*	try
	{
		if (this->m_grade > 150)
		{	
			throw Bureaucrat::GradeTooLowException();
		}
	//	this->m_grade = 150;
	}
	catch(const std::exception & e)
	{
		std::cout << "This is an inicial grade too LowException"  << std::endl;
		this->m_grade = 150;
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
		this->m_grade = 1;
	}
	*/
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
//	std::cout << "Destructor Called" << std::endl;
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
	o << instance.getName() << ", bureaucrat. Grade: " << instance.getGrade();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
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
	this->m_grade -= grade;
	if (this->m_grade <= 0)
		throw Bureaucrat::GradeTooHighException();
	/*
	try
	{
		if (this->m_grade - grade <= 0)
			throw Bureaucrat::GradeTooHighException();
		else
			this->m_grade -= grade;
	}
	catch(std::exception & e)
	{
		std::cout << "This is an exception(incGrade)" << std::endl;
	}

*/
}

void	Bureaucrat::decGrade(int grade)
{
	this->m_grade += grade;
	if (this->m_grade > 150)
		throw Bureaucrat::GradeTooLowException();			
	/*
	try
	{
		if (this->m_grade - grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else
			this->m_grade += grade; 
	}
	catch(std::exception & e)
	{
		std::cout << "This is an exception (decGrade)" << std::endl;
	}
	*/
}

/*
** --------------------------------- EXCEPTION CLASS ---------------------------------
*/

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return "GradeTooHighEception: There is no highest grade, 1 is the best";
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return "GradeTooLowEception: Sorry, this is embarassing, the lowest grade is 150";
}

/* ************************************************************************** */