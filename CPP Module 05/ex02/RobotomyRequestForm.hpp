#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{

	public:

		RobotomyRequestForm();
		RobotomyRequestForm( RobotomyRequestForm const & src );
		RobotomyRequestForm( std::string target);
		virtual ~RobotomyRequestForm();

		RobotomyRequestForm &		operator=( RobotomyRequestForm const & rhs );

		virtual void	execute(Bureaucrat const &executor) const;
		const std::string	& getTarget( void ) const;
	private:
	std::string	m_target;
};

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & instance );

#endif /* ********************************************* ROBOTOMYREQUESTFORM_H */