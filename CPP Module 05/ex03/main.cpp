/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:50:56 by lvintila          #+#    #+#             */
/*   Updated: 2022/12/15 21:39:22 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"


int	main( void )
{
    int amount_1 = 100;
    int amount_2 = 12;
    int amount_3 = 73;
    int amount_4 = 69;
    try
    {
        Bureaucrat b = Bureaucrat("Leo", 142);
        std::cout << b << std::endl;
        b.getGrade();
        std::cout << "1. " << b << std::endl;
        std::cout << "2. " << b.getName() << " have increased " << amount_1 << " grades" << std::endl;
        b.incGrade(amount_1);
        std::cout << "2. " << b << std::endl;
        std::cout << "3. " << b.getName() << " have increased " << amount_2 << " grades" << std::endl;
        b.incGrade(amount_2);
        std::cout << "3. " << b << std::endl;
        std::cout << "4. Oops " << b.getName() << " have decreased " << amount_3 << " grades" << std::endl;
        b.decGrade(amount_3);
        std::cout << "4. " << b << std::endl;
        std::cout << "5. " << b.getName() << " have increased " << amount_4 << " grades" << std::endl;
        b.incGrade(amount_4);
        std::cout << "5. " << b << std::endl;
        std::cout << "Congratulations!! The final grade is: " << b.getGrade() << std::endl;
    }
    catch(const std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    
	
	return (0);
}

*/


/*
=================

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
    int amount_1 = 100;
    int amount_2 = 12;
    int amount_3 = 73;
    int amount_4 = 69;
    try
    {
        Bureaucrat b = Bureaucrat("Leo", 142);
        std::cout << b << std::endl;
        b.getGrade();
        std::cout << "1. " << b << std::endl;
        std::cout << "2. " << b.getName() << " have increased " << amount_1 << " grades" << std::endl;
        b.incGrade(amount_1);
        std::cout << "2. " << b << std::endl;
        std::cout << "3. " << b.getName() << " have increased " << amount_2 << " grades" << std::endl;
        b.incGrade(amount_2);
        std::cout << "3. " << b << std::endl;
        std::cout << "4. Oops " << b.getName() << " have decreased " << amount_3 << " grades" << std::endl;
        b.decGrade(amount_3);
        std::cout << "4. " << b << std::endl;
        std::cout << "5. " << b.getName() << " have increased " << amount_4 << " grades" << std::endl;
        b.incGrade(amount_4);
        std::cout << "5. " << b << std::endl;
        std::cout << "Congratulations!! The final grade is: " << b.getGrade() << std::endl;
    }
    catch(const std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

	// ====================================
	try
	{
		Form	f("Form00", 0, 1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;


	try
	{
		Form	f("Form01", 1, 0);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;


	try
	{
		Form	f("Form02", 1, 151);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;


	try
	{
		Form	f("Form03", 151, 0);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;


	try
	{
		Bureaucrat	leo = Bureaucrat("Leo", 111);
		Form		f("Form04", 140, 150);
		Form		t("Form04", 100, 120);
		try
		{
			f.checkExecForm(leo);
			t.checkExecForm(leo);
		}
		catch(Form::ExecFormForbiddenException &e)
		{
			std::cout << e.what() << std::endl;
		}
		
		
        std::cout << leo << std::endl;	
		std::cout << f << std::endl;
		leo.signForm(f);
		std::cout << f << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	



	try
	{
		Bureaucrat	astrid = Bureaucrat("Astrid", 1);
		Form		f("Form05", 1, 1);
				try
		{
			f.checkExecForm(astrid);
		}
		catch(Form::ExecFormForbiddenException &e)
		{
			std::cout << e.what() << std::endl;
		}
        std::cout << astrid << std::endl;
		std::cout << f << std::endl;
		astrid.signForm(f);
		std::cout << f << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	Form			*form = NULL;
	Bureaucrat		bob("bob", 1);
	Bureaucrat		phil("phil", 40);
	Bureaucrat		luc("luc", 150);
	try
	{
		form = new ShrubberyCreationForm("28C");
		form->beSigned(bob);
		form->checkExecForm(phil);
		form->checkExecForm(luc);
		delete form;
		form = NULL;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
*/

/*
=============================================

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Form			*form = NULL;
	Bureaucrat		bob("bob", 1);
	Bureaucrat		phil("phil", 40);
	Bureaucrat		luc("luc", 150);

	try
	{
		form = new PresidentialPardonForm("28Z");
		form->checkExecForm(bob);
	//	delete form;
	//	form = NULL;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
        std::cout << bob << std::endl;	
		std::cout << form << std::endl;
		bob.signForm(*form);
		std::cout << form << std::endl;
	try
	{
		form = new PresidentialPardonForm("28A");
		form->beSigned(bob);
		form->checkExecForm(bob);
		bob.execForm(*form);
	//	delete form;
	//	form = NULL;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}


	try
	{
		form = new RobotomyRequestForm("28B");
		form->beSigned(phil);
		form->checkExecForm(phil);
		form->checkExecForm(phil);
		form->checkExecForm(phil);
		form->checkExecForm(phil);
		form->checkExecForm(phil);
		form->checkExecForm(phil);
		form->checkExecForm(phil);
		form->checkExecForm(phil);
		form->checkExecForm(phil);
	//	delete form;
	//	form = NULL;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}


	try
	{
		form = new ShrubberyCreationForm("28C");
		form->beSigned(bob);
		form->checkExecForm(phil);
		form->checkExecForm(luc);
	//	delete form;
	//	form = NULL;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "------- Breaking Point -------" << std::endl;

}

=============================================
*/


#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern		usefulIdiot;
	Bureaucrat	paul("Paul", 3);
	Form		*form;

	std::cout << "------- Breaking Point -------" << std::endl;
	form = usefulIdiot.makeForm("this one doesn't exist", "Justin");
	if (form)
		delete form;
	form = usefulIdiot.makeForm("presidential pardon", "Maynard");

	form = usefulIdiot.makeForm("shrubbery creation", "Danny");

	form = usefulIdiot.makeForm("robotomy request", "Adam");
	form->beSigned(paul);
	form->checkExecForm(paul);


//	delete *(&form);
//	system("leaks Intern");
		return (0);
}