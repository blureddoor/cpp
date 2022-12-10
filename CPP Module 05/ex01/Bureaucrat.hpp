#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Form;

class Bureaucrat
{
	private:
		std::string const	m_name;
		int		m_grade;
		Bureaucrat(void);
	public:

		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(const Bureaucrat & src );
		~Bureaucrat();

		Bureaucrat &		operator=( Bureaucrat const & rhs );
		int		getGrade(void) const;
		std::string			getName (void) const;
		void				incGrade(int grade);
		void				decGrade(int grade);
		
		bool				execForm(const Form &form) const;
		bool				signForm( Form &form) const;	
		
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

};

std::ostream &			operator<<( std::ostream & o, Bureaucrat & instance );

#endif /* ****************************************************** BUREAUCRAT_H */