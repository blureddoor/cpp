#include "ShrubberyCreationForm.hpp"
#include <fstream>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm() : Form ("default Shrubbery", 145, 137), m_target("")
{
	std::cout << "Default Constructor ShrubberyCreationForm Called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ) : 
	Form(src.getName(), 145, 137), m_target(src.getTarget())
{
	*this = src;
	std::cout << " Copy (src) Constructor ShrubberyCreationForm Called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target) :
	Form(target, 145, 137), m_target(target)
{
	std::cout << " Standard Constructor ShrubberyCreationForm Called" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << " Destructor ShrubberyCreationForm Called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	if ( this != &rhs )
	{
		this->m_target = rhs.getTarget();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & instance )
{
	o << "ShrubberyCreationForm: " << std::endl
		<< "Name: " << instance.getName() << std::endl
		<< "Signed grade: " << instance.getSignGrade() << std::endl
		<< "Execute grade: " << instance.getExecGrade() << std::endl;
		if (instance.getSignGrade())
			o << "ShrubberyCreationForm hs been signed." << std::endl;
		else
			o << "ShrubberyCreationForm has not yet been signed." << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

const std::string	& ShrubberyCreationForm::getTarget( void ) const
{
	return (this->m_target);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{  
		this->checkExecForm(executor);
 		
		std::string file;
		file = getName() + "_shrubbery";
		std::ofstream 		ofs(file);
		

		ofs << "            .        +          .      .          ." << std::endl;
		ofs << ".            _        .                    .  " << std::endl;
		ofs << ",              /;-._,-.____        ,-----.__   " << std::endl;
		ofs <<" ((        .    (_:#::_.:::. `-._   /:, /-._, '._, " << std::endl;
		ofs <<"                     _|`=:_::.`.;     __/ /		" << std::endl;
		ofs <<"                      ,    `./  \\:. `.   )==-'  . " << std::endl;
		ofs <<"   .      ., ,-=-.  ,\\, +#./`   \\:.  / /           ." << std::endl;
		ofs <<".           \\/:/`-' , ,\\ '` ` `   ): , /_  -o" << std::endl;
		ofs <<"       .    /:+- - + +- : :- + + -:'  /(o-) \\)     ." << std::endl;
		ofs <<"  .      ,=':  \\    ` `/` ' , , ,:' `'--""---._/`7 " << std::endl;
		ofs <<"   `.   (    \\: \\,-._` ` + '\\, ,"         " `/" << std::endl;
		ofs <<"              \\:  `  X` _| _,\\/'   .-'" << std::endl;
		ofs <<".                       '\\____,  /:     +         + - · "<< std::endl;
		ofs <<"                    \\::.  :\\/:'  /          +    " << std::endl;
		ofs <<"   .                 `.:.  /:'  }      ." << std::endl;
		ofs <<"          .           ):_(:;   \\           ." << std::endl;
		ofs <<"                      /:. _/ ,  |" << std::endl;
		ofs <<"                   . (|::.     ,`                  ." << std::endl;
		ofs <<"     .                |::.    {\"" << std::endl;
		ofs <<"                      |::.\\  \\ `." << std::endl;
		ofs <<"                      |:::(\\    |" << std::endl;
		ofs <<"              O       |:::/{ }  |                  (o" << std::endl;
		ofs <<"               )  ___/#\\::`/ (O ==._____   O, (O  /`" << std::endl;
		ofs <<"          ~~~w/w~~'~,\\` `:/,-(~`~~~~~~~~~~'~o~\\~/~w|/~" << std::endl;
		ofs <<"   ~~~~~~~~~~~~~~~~~~~~~~~\\W~~~~~~~~~~~~~~\\|/~~"  << std::endl;

		ofs.close();
		std::cout << getName() << "_shrubbery" 
			<< " with ASCII Tree inside it, created" << std::endl;
/*	
	if (this->isSigned() == false)
		throw Form::GradeTooLowException();
	else if (this->checkExecForm(executor))
		throw Form::ExecFormForbiddenException();
*/
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */