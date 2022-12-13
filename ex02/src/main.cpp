#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main(void){

	//test1 Bureaucat can't sign because his grade is too low
	Bureaucrat bureaucrat1("Raoni1", 5);
	AForm form1("form 1", 3, 3);
	try {
		form1.beSigned(bureaucrat1);
		bureaucrat1.signForm(form1);
	}
	catch(std::exception &e){
		bureaucrat1.signForm(form1);
		std::cout << e.what() << std::endl;
	}

	//test2 Bureaucat can sign the form
	Bureaucrat bureaucrat2("Raoni2", 5);
	AForm form2("form 2", 5, 5);
	try {
		form2.beSigned(bureaucrat2);
		bureaucrat2.signForm(form2);
	}
	catch(std::exception &e){
		bureaucrat2.signForm(form2);
		std::cout << e.what() << std::endl;
	}

	//test3 Form can't be create because grade is out of bounds
	try {
		AForm form3("form 2", 0, 5);
		form2.beSigned(bureaucrat2);
		bureaucrat2.signForm(form2);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
}