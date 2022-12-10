#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

class Bureaucrat;

class Form
{

	public:

		Form( const std::string &name, int grade_to_exec, int grade_to_sign);
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
				virtual const char* what() const throw()
				{
					return "GradeTooHIghEception: There is no highest grade, 1 is the best";
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "GradeTooLowEception: Sorry, this is embarassing, the lowest grade is 150";
				}

		};

		class ExecFormForbiddenException
		{
			public:
				virtual const char* what() const throw()
				{
					return "ExecFormForbiddenException: Can't Execute the Form";
				}			

		};
		

	private:
		const std::string	m_name;
		bool				m_signed;
		const int			m_grade_to_exec;
		const int			m_grade_to_sign;
		Form(void);

};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */