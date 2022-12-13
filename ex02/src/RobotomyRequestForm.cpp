#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : RobotomyRequestForm()
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