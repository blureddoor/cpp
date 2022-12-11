#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

class Bureaucrat;

class Form
{

	public:

		Form( const std::string &name, int grade_to_sign, int grade_to_exec);
		Form( Form const & src );
		~Form();

		Form &		operator=( Form const & rhs );

		const std::string	&getName (void) const;
		int			getSignGrade(void) const;
		int			getExecGrade(void) const;
		bool				isSigned(void) const;

		bool				beSigned(const Bureaucrat &bureaucrat);
		void				checkExecForm(const Bureaucrat &bureaucrat) const;

		class GradeTooHighException : public std::exception
		{
			public:	
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class ExecFormForbiddenException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		

	private:
		const std::string	m_name;
		bool				m_signed;
		const int			m_grade_to_sign;
		const int			m_grade_to_exec;
		Form(void);

};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */