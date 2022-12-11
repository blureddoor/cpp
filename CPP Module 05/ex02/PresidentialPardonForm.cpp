#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm()
	: Form("default PresidentialPardonForm", 25, 5), m_target("")
{
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src )
	: Form(src.getName(), 25, 5), m_target(src.getTarget())
{
	*this = src;

}

PresidentialPardonForm::PresidentialPardonForm( std::string target)
	: Form(target, 25, 5), m_target(target)
{

}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &				PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	if ( this != &rhs )
	{
		this->m_target = rhs.getTarget();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & instance )
{
		o << "PresidentialPardonForm: " << std::endl
		<< "Name: " << instance.getName() << std::endl
		<< "Signed grade: " << instance.getSignGrade() << std::endl
		<< "Execute grade: " << instance.getExecGrade() << std::endl;
		if (instance.getSignGrade())
			o << "PresidentialPardonForm hs been signed." << std::endl;
		else
			o << "PresidentialPardonForm has not yet been signed." << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
const std::string	& PresidentialPardonForm::getTarget( void ) const
{
	return (this->m_target);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	this->checkExecForm(executor);
	std::cout << executor.getName() << " has been pardoned by Zafod Beeblebrox." << std::endl;
/*
	else if (this->isSigned() == false)
		throw Form::GradeTooLowException();
	else if (this->checkExecForm(executor) == false)
		throw Form::ExecFormForbiddenException();
		*/
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */