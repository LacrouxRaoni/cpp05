#ifndef INTERN_HPP
#define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

class Intern 
{
	public:
		AForm* makeForm(std::string formName, std::string target);

		class InterException : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return "Form doesn't exist";
				}
		};
};

#endif