#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <stdlib.h>

class RobotomyRequestForm : public AForm
{
	private:
		std::string target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm& robotomyRequestForm);
		RobotomyRequestForm& operator=(RobotomyRequestForm& robotomyRequestForm);
		std::string getTarget();
		void execute(Bureaucrat const& executor) const;
};

#endif
