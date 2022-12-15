#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5)
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

void PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
	if (executor.getGrade() > this->getGradeToSign())
		throw GradeTooLowException();
	if (this->getSignedForm() == false)
		throw FormNotSignedException();
	else
		std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}