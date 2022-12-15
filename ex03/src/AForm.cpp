#include "AForm.hpp"

AForm::AForm() : name("Default"), signedForm(false), grade(1), gradeToSign(1)
{
}

AForm::AForm(std::string name, int grade, int gradeToSign) : name(name), signedForm(false), grade(grade), gradeToSign(gradeToSign)
{
	if (grade < 1 || gradeToSign < 1)
		throw GradeTooHighException();
	if (grade > 150 || gradeToSign > 150)
		throw GradeTooLowException();
}

AForm::~AForm(){
}

AForm::AForm(const AForm& form) : name(form.getName()), signedForm(form.getSignedForm()), grade(form.getGrade()), gradeToSign(form.getGradeToSign())
{
	*this = form;
}

AForm& AForm::operator=(const AForm& form)
{
	if (this != &form)
	{
		this->signedForm = form.signedForm;
	}
	return *this;
}

const std::string& AForm::getName() const
{
	return this->name;
}

bool AForm::getSignedForm() const
{
	return this->signedForm;
}

int AForm::getGrade() const
{
	return this->grade;
}

int AForm::getGradeToSign() const
{
	return this->gradeToSign;
}

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->getGradeToSign())
		throw GradeTooLowException();
	if (this->getSignedForm() == true)
		throw FormSignedException();
	this->signedForm = true;
}

void AForm::execute(Bureaucrat const& executor) const
{
	(void)executor;
}

std::ostream& operator<<(std::ostream &rhs, const AForm &lhs){
	rhs << lhs;
	return rhs;
}