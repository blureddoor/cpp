/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 19:03:20 by lvintila          #+#    #+#             */
/*   Updated: 2022/12/10 14:06:05 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

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

int	Bureaucrat::getGrade(void) const
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



bool	Bureaucrat::execForm(const Form &form) const
{
	try
	{
		form.checkExecForm(*this);
		std::cout << this->m_name << " executes form " << form.getName()
			<< std::endl;
		return true;
	}
	catch (Form::ExecFormForbiddenException &e)
	{
		std::cout << e.what()<< std::endl;
		return false;
	}
	
}


bool Bureaucrat::signForm(Form &form) const
{
	if(form.beSigned(*this))
	{
		std::cout << this->m_name << " signs form " << form.getName() << std::endl;
		return true;
	}
	else
	{
		std::cout << this->m_name << " cannot signs form " << form.getName()
			<< " because their grade: " << this->getGrade()
			<< ", isn't high enough to be signed" << std::endl;
		return false;
	}
}



/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */