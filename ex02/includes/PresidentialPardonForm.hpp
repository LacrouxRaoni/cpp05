#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		std::string target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm& presidentialPardonForm);
		PresidentialPardonForm& operator=(PresidentialPardonForm& presidentialPardonForm);
		std::string getTarget();
		void execute(Bureaucrat const& executor) const;
};

#endif