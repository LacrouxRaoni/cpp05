#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form
{
	private:
		const std::string name;
		bool signedForm;
		const int grade;
		const int gradeToSign;
	public:
		Form();
		Form(const std::string name, int grade, int gradeToSign);
		~Form();
		Form(const Form& form);
		Form& operator=(const Form& form);
		const std::string& getName() const;
		bool getSignedForm() const;
		int getGrade() const;
		int getGradeToSign() const;
		void beSigned(const Bureaucrat &bureaucrat);		
		
		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return "Grade is too high";
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return "Grade is too low";
				}
		};

};

std::ostream& operator<<(std::ostream &rhs, const Form& lhs);

#endif