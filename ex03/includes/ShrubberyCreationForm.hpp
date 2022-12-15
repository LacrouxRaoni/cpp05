#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
	private:
		std::string target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm& shrubberyCreationForm);
		ShrubberyCreationForm& operator=(ShrubberyCreationForm& shrubberyCreationForm);
		std::string getTarget();
		void execute(Bureaucrat const& executor) const;
};

#endif
