#include "Intern.hpp"

AForm* Intern::makeForm(std::string formName, std::string target)
{
	AForm* form;
	std::string defaultFormName[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	int i;

	i = 0;
	while (defaultFormName[i].compare(formName) != 0 && i < 3)
		i++;
	switch(i)
	{
		case 0:
			form = new ShrubberyCreationForm(target);
			break ;
		case 1:
			form = new RobotomyRequestForm(target);
			break ;
		case 2:
			form = new PresidentialPardonForm(target);
			break ;
		default:
			throw InterException();
	}
	return form;
}