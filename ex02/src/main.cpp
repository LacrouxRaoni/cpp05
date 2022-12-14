#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void){
	Bureaucrat bureaucrat1("Raoni", 1);
	ShrubberyCreationForm form("Pudim");

	//test1 ShrubberyCreationForm not signet yet
	try{
		bureaucrat1.executeForm(form);
	} catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}

	//test2 ShrubberyCreationForm will be signed and executed
	try{
		bureaucrat1.signForm(form);
		bureaucrat1.executeForm(form);
	} catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}
	
	//test3 ShrubberyCreationForm signed already
	try{
		bureaucrat1.signForm(form);
	} catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}
}