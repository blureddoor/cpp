#include "Form.hpp"
#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form(const std::string &name, int grade_to_sign, int grade_to_exec)
	:m_name(name), m_signed(false), m_grade_to_sign(grade_to_sign),
		m_grade_to_exec(grade_to_exec)
{
	if (this->m_grade_to_exec < 1
			|| this->m_grade_to_sign < 1)
		throw Form::GradeTooHighException();
	if (this->m_grade_to_exec > 150
			|| this->m_grade_to_sign > 150)
		throw Form::GradeTooLowException();
}

Form::Form( const Form & src )
	:m_name(src.getName()), m_signed(src.isSigned()),
		m_grade_to_sign(src.getSignGrade()), m_grade_to_exec(src.getExecGrade())
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
	std::cout << "Destructor Called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
	{
		this->m_signed = rhs.isSigned();
		std::cout << "Assignment operator called: names and grades are const,"
			<< " only m_signed is copied." << std::endl;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & instance )
{
	o << instance.getName() << ", form. ExecGrade: " << instance.getExecGrade()
		<< " and SignGrade: " << instance.getSignGrade();
	return o;
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Form::checkExecForm(const Bureaucrat &bureaucrat) const
{
	if (!this->m_signed || bureaucrat.getGrade() > this->m_grade_to_exec)
		throw Form::ExecFormForbiddenException();
	else if (bureaucrat.getGrade() > this->m_grade_to_sign)
		throw Form::GradeTooLowException();
}

const	std::string & Form::getName (void) const
{
	return (this->m_name);
}

int		Form::getSignGrade( void ) const
{
	return (this->m_signed);
}

int		Form::getExecGrade( void ) const
{
	return (this->m_grade_to_exec);
}

bool	Form::isSigned() const
{
	return (this->m_signed);
}

bool	Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= this->m_grade_to_sign)
	{
		this->m_signed = true;
		return true;
	}
	else
	{
		this->m_signed = false;
		return false;
	}

}

/*
** --------------------------------- EXCEPTION CLASS ---------------------------------
*/

const char * Form::GradeTooHighException::what() const throw()
{
	return "GradeTooHighEception: There is no highest grade, 1 is the best";
}

const char * Form::GradeTooLowException::what() const throw()
{
	return "GradeTooLowEception: Sorry, this is embarassing, the lowest grade is 150";
}

const char * Form::ExecFormForbiddenException::what() const throw()
{
	return "ExecFormForbiddenException: Can't Execute the Form";
}

/* ************************************************************************** */