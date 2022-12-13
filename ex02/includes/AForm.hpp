#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class AForm
{
	private:
		const std::string name;
		bool signedForm;
		const int grade;
		const int gradeToSign;
	public:
		AForm();
		AForm(const std::string name, int grade, int gradeToSign);
		~AForm();
		AForm(const AForm& form);
		AForm& operator=(const AForm& form);
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

std::ostream& operator<<(std::ostream &rhs, const AForm& lhs);

#endif