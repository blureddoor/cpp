#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class PresidentialPardonForm : public Form
{

	public:

		PresidentialPardonForm();
		PresidentialPardonForm( PresidentialPardonForm const & src );
		PresidentialPardonForm( std::string target);
		virtual ~PresidentialPardonForm();

		PresidentialPardonForm &		operator=( PresidentialPardonForm const & rhs );
		virtual void	execute(Bureaucrat const &executor) const;
		const std::string	& getTarget( void ) const;
	private:
		std::string m_target;

};

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & instance );

#endif /* ****************************************** PRESIDENTIALPARDONFORM_H */