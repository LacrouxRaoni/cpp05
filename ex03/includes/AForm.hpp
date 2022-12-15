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
		virtual ~AForm();
		AForm(const AForm& form);
		AForm& operator=(const AForm& form);
		const std::string& getName() const;
		bool getSignedForm() const;
		int getGrade() const;
		int getGradeToSign() const;
		void beSigned(const Bureaucrat &bureaucrat);
		virtual void execute(Bureaucrat const& executor) const;
		
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

		class FormNotSignedException : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return "Form not signed yet";
				}
		};

		class FormSignedException : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return "Form has been signed already";
				}
		};

		class OpenFileException : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return "File can't be opened";
				}
		};

};

std::ostream& operator<<(std::ostream &rhs, const AForm& lhs);

#endif