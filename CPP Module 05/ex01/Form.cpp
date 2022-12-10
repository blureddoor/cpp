#include "Form.hpp"
#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form(const std::string &name, int grade_to_exec, int grade_to_sign)
	:m_name(name), m_signed(false), m_grade_to_exec(grade_to_exec),
		m_grade_to_sign(grade_to_sign)
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
		m_grade_to_exec(src.getExecGrade()), m_grade_to_sign(src.getSignGrade())
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
		const std::string	&getName (void) const;
		int					getSignGrade(void) const;
		int					getExecGrade(void) const;
		bool				isSigned(void) const;


		void				incGrade(int grade);
		void				decGrade(int grade);

		bool				beSigned(const Bureaucrat &bureaucrat);
*/

void	Form::checkExecForm(const Bureaucrat &bureaucrat) const
{
	if (/*this->m_signed == false
			|| */bureaucrat.getGrade() > this->m_grade_to_exec)
		throw Form::ExecFormForbiddenException();
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
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */