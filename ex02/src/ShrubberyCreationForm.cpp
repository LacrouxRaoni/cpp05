#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm()
{
	this->target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& shrubberyCreationForm) : AForm(shrubberyCreationForm)
{
	*this = shrubberyCreationForm;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm& shrubberyCreationForm)
{
	if (this != &shrubberyCreationForm)
	{
		this->target = shrubberyCreationForm.getTarget();
	}
	return *this;
}

std::string ShrubberyCreationForm::getTarget()
{
	return this->target;
}