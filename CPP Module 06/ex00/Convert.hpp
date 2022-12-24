#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>
# include <exception>
#include <iomanip>

class Convert
{

	public:

		Convert();
		Convert( Convert const & src );
		Convert(std::string input);
		virtual ~Convert();

		Convert &		operator=( Convert const & rhs );

		operator char(void) const;
		operator int(void) const;
		operator float(void) const;
		operator double(void) const;
		void printChar(char *arg);
		void printInt(char *arg);
		void printFloat(char *arg);
		void printDouble(char *arg);

		class ConvertErrorException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		

	private:
		std::string	m_input;


};

std::ostream &			operator<<( std::ostream & o, Convert const & instance );

#endif /* ********************************************************* CONVERT_H */