#include "Form.hpp"

Form::Form() : name("Default"), signedForm(false), grade(1), gradeToSign(1)
{
}

Form::Form(std::string name, int grade, int gradeToSign) : name(name), signedForm(false), grade(grade), gradeToSign(gradeToSign)
{
	if (grade < 1 || gradeToSign < 1)
		throw GradeTooHighException();
	if (grade > 150 || gradeToSign > 150)
		throw GradeTooLowException();
}

Form::~Form(){
}

Form::Form(const Form& form) : name(form.getName()), signedForm(form.getSignedForm()), grade(form.getGrade()), gradeToSign(form.getGradeToSign())
{
	*this = form;
}

Form& Form::operator=(const Form& form)
{
	if (this != &form)
	{
		this->signedForm = form.signedForm;
	}
	return *this;
}

const std::string& Form::getName() const
{
	return this->name;
}

bool Form::getSignedForm() const
{
	return this->signedForm;
}

int Form::getGrade() const
{
	return this->grade;
}

int Form::getGradeToSign() const
{
	return this->gradeToSign;
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->getGradeToSign())
		throw GradeTooLowException();
	this->signedForm = true;
}

std::ostream& operator<<(std::ostream &rhs, const Form &lhs){
	rhs << lhs;
	return rhs;
}