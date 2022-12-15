#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void){
	Bureaucrat bureaucrat1("Raoni", 136);
	ShrubberyCreationForm form("Pudim");
	ShrubberyCreationForm *formSh = new ShrubberyCreationForm("PudimSig");


	//test1 ShrubberyCreationForm not signet yet
	std::cout << "test1 ShrubberyCreationForm" << std::endl;
	bureaucrat1.executeForm(form);

	//test2 ShrubberyCreationForm will be signed and executed
	std::cout << "\ntest2 ShrubberyCreationForm" << std::endl;
	bureaucrat1.signForm(form);
	bureaucrat1.executeForm(form);
	
	//test3 ShrubberyCreationForm signed already
	std::cout << "\ntest3 ShrubberyCreationForm" << std::endl;
	bureaucrat1.signForm(form);

	//test4 ShrubberyCreationForm can't be executed;
	std::cout << "\ntest4 ShrubberyCreationForm" << std::endl;
	while (bureaucrat1.getGrade() < 150)
		bureaucrat1.decrementBureaucratGrade();
	bureaucrat1.executeForm(form);

	//test5 ShrubberyCreationForm can be signed but not executed;
	std::cout << "\ntest5 ShrubberyCreationForm" << std::endl;
	std::cout << "Contract Signed status: " << formSh->getSignedForm() << std::endl; 
	while (bureaucrat1.getGrade() > 135)
		bureaucrat1.incrementBureaucratGrade();
	formSh->beSigned(bureaucrat1);
	while (bureaucrat1.getGrade() < 150)
		bureaucrat1.decrementBureaucratGrade();
	std::cout << "Contract Signed status: " << formSh->getSignedForm() << std::endl; 
	bureaucrat1.executeForm(*formSh);
	delete formSh;




	//##################################

	RobotomyRequestForm formRobot("Robot Pudim");
	RobotomyRequestForm *formRobot1 = new RobotomyRequestForm("Robot 1 Pudim");

	//test1 RobotomyRequestForm not signet yet
	std::cout << "\ntest1 RobotomyRequestForm" << std::endl;
	while (bureaucrat1.getGrade() > 1)
		bureaucrat1.incrementBureaucratGrade();
	bureaucrat1.executeForm(formRobot);

	//test2 RobotomyRequestForm will be signed and executed
	std::cout << "\ntest2 RobotomyRequestForm" << std::endl;
	bureaucrat1.signForm(formRobot);
	bureaucrat1.executeForm(formRobot);

	//test3 RobotomyRequestForm signed already
	std::cout << "\ntest3 RobotomyRequestForm" << std::endl;
	bureaucrat1.signForm(formRobot);

	//test4 RobotomyRequestForm can't be signed;
	std::cout << "\ntest4 RobotomyRequestForm" << std::endl;
	while (bureaucrat1.getGrade() < 150)
		bureaucrat1.decrementBureaucratGrade();
	bureaucrat1.executeForm(formRobot);	

	//test5 RobotomyRequestForm can be signed but not executed;
	std::cout << "\ntest5 RobotomyRequestForm" << std::endl;
	std::cout << "Contract Signed status: " << formRobot1->getSignedForm() << std::endl; 
	while (bureaucrat1.getGrade() > 43)
		bureaucrat1.incrementBureaucratGrade();
	formRobot1->beSigned(bureaucrat1);
	while (bureaucrat1.getGrade() < 75)
		bureaucrat1.decrementBureaucratGrade();
	std::cout << "Contract Signed status: " << formRobot1->getSignedForm() << std::endl; 
	bureaucrat1.executeForm(*formRobot1);
	delete formRobot1;



	//##################################

	PresidentialPardonForm formPres("President Pudim");
	PresidentialPardonForm *formPres1 = new PresidentialPardonForm("Robot 1 Pudim");

	//test1 PresidentialPardonForm not signet yet
	std::cout << "\ntest1 PresidentialPardonForm" << std::endl;
	while (bureaucrat1.getGrade() > 1)
		bureaucrat1.incrementBureaucratGrade();
	bureaucrat1.executeForm(formPres);

	//test2 PresidentialPardonForm will be signed and executed
	std::cout << "\ntest2 PresidentialPardonForm" << std::endl;
	bureaucrat1.signForm(formPres);
	bureaucrat1.executeForm(formPres);

	//test3 PresidentialPardonForm signed already
	std::cout << "\ntest3 PresidentialPardonForm" << std::endl;
	bureaucrat1.signForm(formPres);

	//test4 PresidentialPardonForm can't be signed;
	std::cout << "\ntest4 PresidentialPardonForm" << std::endl;
	while (bureaucrat1.getGrade() < 150)
		bureaucrat1.decrementBureaucratGrade();
	bureaucrat1.executeForm(formPres);	

	//test5 PresidentialPardonForm can be signed but not executed;
	std::cout << "\ntest5 PresidentialPardonForm" << std::endl;
	std::cout << "Contract Signed status: " << formPres1->getSignedForm() << std::endl; 
	while (bureaucrat1.getGrade() > 4)
		bureaucrat1.incrementBureaucratGrade();
	formPres1->beSigned(bureaucrat1);
	while (bureaucrat1.getGrade() < 30)
		bureaucrat1.decrementBureaucratGrade();
	std::cout << "Contract Signed status: " << formPres1->getSignedForm() << std::endl; 
	bureaucrat1.executeForm(*formPres1);
	delete formPres1;
}