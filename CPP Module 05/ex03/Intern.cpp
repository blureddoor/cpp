#include "Intern.hpp"
#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
}

Intern::Intern( const Intern & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
	std::cout << " Intern Destructor Called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	(void)rhs;
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Intern const & instance )
{
	(void)instance;
	o << "Intern = " << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

Form 			*Intern::makeForm(const std::string &formName,
					const std::string &target) const
{
	t_formList forms[] =
	{
		{"shrubbery creation", new ShrubberyCreationForm(target)},
		{"robotomy request", new RobotomyRequestForm(target)},
		{"presidential pardon", new PresidentialPardonForm(target)},
		{"", NULL}
	};

	Form *resultForm = NULL;
	for (int i = 0; forms[i].formType != NULL; i++)
	{
		if (forms[i].formName == formName)
			resultForm = forms[i].formType;
		else
		{
			forms[i].formType = NULL;
		}
	}
	if (resultForm == NULL)
		std::cout << "Intern didn't find the form " << formName << std::endl;
	else
		std::cout << "Intern creates " << formName << std::endl;
	return resultForm;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */