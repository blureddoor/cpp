#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat
{
	private:
		std::string const	m_name;
		unsigned int		m_grade;
	public:

		Bureaucrat();
		Bureaucrat(const std::string name, unsigned int grade);
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();

		Bureaucrat &		operator=( Bureaucrat const & rhs );
		unsigned int		getGrade(void) const;
		std::string			getName (void) const;
		void				incGrade(int grade);
		void				decGrade(int grade);
		
		class GradeTooHighException : public std::exception
		{
			public:	
				virtual const char* e() const throw()
				{
					return "Sorry, you reach the lowest grade";
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* e() const throw()
				{
					return "There is no highest grade, 1 is the best";
				}

		};

};

std::ostream &			operator<<( std::ostream & o, Bureaucrat & instance );

#endif /* ****************************************************** BUREAUCRAT_H */