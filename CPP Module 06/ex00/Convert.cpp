#include "Convert.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Convert::Convert()
{
}

Convert::Convert( const Convert & src )
{
	m_input = src.m_input;
	*this = src;
}

Convert::Convert( std::string input ) :m_input(input)
{

}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Convert::~Convert()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Convert &				Convert::operator=( Convert const & rhs )
{
	m_input = rhs.m_input;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Convert const & instance )
{
	(void)instance;
	return o;
}

Convert::operator char(void) const
{
	int res = 0;
	try
	{
		res = std::stoi(m_input);
		return (static_cast<char>(res));
	}
	catch(const std::exception& e)
	{
		throw (ConvertErrorException());
	}
}

Convert::operator int(void) const
{
	int res = 0;
	try
	{
		res = std::stoi(m_input);
		return (static_cast<int>(res));
	}
	catch(const std::exception& e)
	{
		throw (ConvertErrorException());
	}
}

Convert::operator float(void) const
{
	float res = 0.0;
	try
	{
		res = std::stof(m_input);
		return (static_cast<float>(res));
	}
	catch(const std::exception& e)
	{
		throw (ConvertErrorException());
	}
}

Convert::operator double(void) const
{
	double res = 0.0;
	try
	{
		res = std::stod(m_input);
		return (static_cast<double>(res));
	}
	catch(const std::exception& e)
	{
		throw (ConvertErrorException());
	}
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Convert::printChar(char *argv)
{
        Convert value(argv);
    	std::cout << "char: ";
		try
		{
			char	res = static_cast<char>(value);

			if (res >= 33 && res <= 126)
				std::cout << "'" << res << "'" << std::endl;
			else if (res == 127 || (res >= -128 && res < 33))
				std::cout << "Non displayable" << std::endl;
			else
				std::cout << "conversion error" << std::endl;
		}
		catch (Convert::ConvertErrorException &e)
		{
			std::cout << e.what() << std::endl;
		}
}

void Convert::printInt(char *argv)
{
        Convert value(argv);
    	std::cout << "int: ";
		try
		{
	        std::cout << static_cast<int>(value) << std::endl;
		}
		catch (Convert::ConvertErrorException &e)
		{
			std::cout << e.what() << std::endl;
		}
}

void Convert::printFloat(char *argv)
{
        Convert value(argv);
    	std::cout << "float: ";
		try
		{
	        std::cout << static_cast<float>(value) << "f" << std::endl;
		}
		catch (Convert::ConvertErrorException &e)
		{
			std::cout << e.what() << std::endl;
		}
}

void Convert::printDouble(char *argv)
{
        Convert value(argv);
    	std::cout << "double: ";
		try
		{
	        std::cout << static_cast<double>(value) << std::endl;
		}
		catch (Convert::ConvertErrorException &e)
		{
			std::cout << e.what() << std::endl;
		}
}

/*
** --------------------------------- EXCEPTION CLASS ---------------------------------
*/

const char * Convert::ConvertErrorException::what() const throw()
{
	return "impossible";
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */