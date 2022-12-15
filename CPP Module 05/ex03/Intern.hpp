#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{

	public:

		Intern();
		Intern( Intern const & src );
		~Intern();

		Intern &		operator=( Intern const & rhs );

		Form 			*makeForm(const std::string &formName, const std::string &target) const;

	private:
		typedef struct		s_formList 
		{
			std::string formName;
			Form		*formType;
		}					t_formList;
};

std::ostream &			operator<<( std::ostream & o, Intern const & instance );

#endif /* ********************************************************** INTERN_H */