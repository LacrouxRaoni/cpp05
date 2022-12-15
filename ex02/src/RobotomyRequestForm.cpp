#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
	this->target = target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& robotomyRequestForm) : AForm(robotomyRequestForm)
{
	*this = robotomyRequestForm;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm& robotomyRequestForm)
{
	if (this != &robotomyRequestForm)
	{
		this->target = robotomyRequestForm.getTarget();
	}
	return *this;
}

std::string RobotomyRequestForm::getTarget()
{
	return this->target;
}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
	if (executor.getGrade() > this->getGrade())
	{
		throw GradeTooLowException();
	}
	if (this->getSignedForm() == false)
	{
		throw FormNotSignedException();
	}
	else
	{
		srand(0);
		if (rand() % 2)
		{
			std::cout << "drilling noises" << std::endl;
			std::cout << target << " has been robotomized successfully." << std::endl;
		}
		else
		{
			std::cout << "drilling noises" << std::endl;
			std::cout << target << " robotomy failed.." << std::endl;
		}
	}
}