#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat
{
	private:
	    std::string const name;
		int grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(const Bureaucrat& bureaucrat);
		~Bureaucrat();
		Bureaucrat& operator=(const Bureaucrat& bureaucrat);
		const std::string getName() const;
		int getGrade() const;

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
	
	void incrementBureaucratGrade();
	void decrementBureaucratGrade();
};

std::ostream& operator<<(std::ostream& rhs, const Bureaucrat &lhs);

#endif