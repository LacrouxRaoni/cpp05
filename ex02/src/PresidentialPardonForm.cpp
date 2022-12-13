#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm()
{
	this->target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& presidentialPardonForm) : AForm(presidentialPardonForm)
{
	*this = presidentialPardonForm;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm& presidentialPardonForm)
{
	if (this != &presidentialPardonForm)
	{
		this->target = presidentialPardonForm.getTarget();
	}
	return *this;
}

std::string PresidentialPardonForm::getTarget()
{
	return this->target;
}