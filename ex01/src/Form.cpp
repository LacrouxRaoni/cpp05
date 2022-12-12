#include "Form.hpp"

Form::Form() : name("Default"), grade(1), gradeToSign(1)
{
}

Form::Form(std::string name, int grade, int gradeToSign) : name(name), grade(grade), gradeToSign(gradeToSign), signedForm(false)
{
	if (grade < 1 || gradeToSign < 1)
		throw GradeTooHighException();
	if (grade > 150 || gradeToSign > 150)
		throw GradeTooLowException();
}

Form::~Form(){
}

Form::Form(const Form& form) : name(name), grade(grade), gradeToSign(gradeToSign), signedForm(false)
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

void Form::beSigned()
{

}

void Form::signForm()
{

}

std::ostream& operator<<(std::ostream &rhs, const Form &lhs){
	
	return rhs;
}