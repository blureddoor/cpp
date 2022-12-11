#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{

	public:

		ShrubberyCreationForm();
		ShrubberyCreationForm( ShrubberyCreationForm const & src );
		ShrubberyCreationForm( std::string target);
		virtual ~ShrubberyCreationForm();

		ShrubberyCreationForm &		operator=( ShrubberyCreationForm const & rhs );

		virtual void	execute(Bureaucrat const &executor) const;
};

std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & instance );

#endif /* ******************************************* SHRUBBERYCREATIONFORM_H */