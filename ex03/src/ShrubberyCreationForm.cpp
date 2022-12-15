#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
	this->target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& shrubberyCreationForm) : AForm(shrubberyCreationForm)
{
	*this = shrubberyCreationForm;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm& shrubberyCreationForm)
{
	if (this != &shrubberyCreationForm)
	{
		this->target = shrubberyCreationForm.getTarget();
	}
	return *this;
}

std::string ShrubberyCreationForm::getTarget()
{
	return this->target;
}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	if (executor.getGrade() > this->getGrade())
	{
		throw GradeTooLowException();
	}
	if (this->getSignedForm() == false)
	{
		throw FormNotSignedException();
	}
	else
	{
		std::string fileName;
		std::fstream file;
		
		fileName.append(target);
		fileName.append("_shrubbery");
		file.open(fileName.c_str(), std::ios::out);
		if (!file.is_open())
			throw OpenFileException();
		else
		{
			file << 		
			"			                                                 \n                       O                         \n                      ***                        \n                     **O**                       \n                    *******                      \n                   *********                     \n                  ***********                   \n                   ******o**                     \n                  ***********                    \n                 ****o********                   \n                ***************                  \n               ****o***o********                 \n              *******************                \n            ***********************              \n               *****O***********                 \n              **********o********                \n             ****************o****               \n            **O********************              \n           ***********o********O****             \n         *****************************           \n             *********************               \n            ***o*******************              \n           ***********o*******o*****             \n          ***************************            \n         ***********************O*****           \n        ***O***************************          \n      ***********************************        \n           *************************             \n          *******o********o**********            \n         *****************************           \n        **************o****************          \n       *************************O*******         \n      *****O*****************************        \n    **************o************************      \n          ***************************            \n         *************o***************           \n        ***********o*******************          \n       **************************O******         \n      ***o******************O************        \n    ***o***********o****************o******      \n                      ###                        \n                      ###                        \n                      ###                        \n                  ###########                    \n                  ###########    \n			"
			 << std::endl;
		}
	}
}