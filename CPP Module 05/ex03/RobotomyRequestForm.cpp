#include "RobotomyRequestForm.hpp"
#include "Form.hpp"
#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm()
	: Form("defatult RobotomyRequestForm", 72, 45), m_target("")
{
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src )
	: Form(src.getName(), 72, 45), m_target(src.getTarget())
{
	*this = src;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target)
	:Form(target, 72, 45)
{

}
/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/


RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	if ( this != &rhs )
	{
		this->m_target = rhs.getTarget();
	}
	return *this;
}


std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & instance )
{
		o << "RobotomyRequestForm: " << std::endl
		<< "Name: " << instance.getName() << std::endl
		<< "Signed grade: " << instance.getSignGrade() << std::endl
		<< "Execute grade: " << instance.getExecGrade() << std::endl;
		if (instance.getSignGrade())
			o << "RobotomyRequestForm hs been signed." << std::endl;
		else
			o << "RobotomyRequestForm has not yet been signed." << std::endl;
	return o;
}



/*
** --------------------------------- METHODS ----------------------------------
*/

const std::string	& RobotomyRequestForm::getTarget( void ) const
{
	return (this->m_target);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	
	this->checkExecForm(executor);
	
		std::cout << " * Some drilling noises ... * " << std::endl;
		if (std::rand() % 2)
			std::cout << executor.getName() << " has been robotomized successfully." << std::endl;
		else
			std::cout << executor.getName() << " has failed to be robotomized." << std::endl;

/*	
	if (this->isSigned() == false)
		throw GradeTooLowException();
	else if(this->checkExecForm(executor) == false)
		throw ExecFormForbiddenException();
*/
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */