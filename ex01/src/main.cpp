#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void){

	//test1 Bureaucat can't sign because his grade is too low
	Bureaucrat bureaucrat1("Raoni1", 5);
	Form form1("form 1", 3, 3);
	try {
		bureaucrat1.signForm(form1);
	}
	catch(std::exception &e){

		std::cout << e.what() << std::endl;
	}

	//test2 Bureaucat can sign the form
	Bureaucrat bureaucrat2("Raoni2", 5);
	Form form2("form 2", 5, 5);
	try {
		bureaucrat2.signForm(form2);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}

	//test3 Form can't be create because grade is out of bounds
	try {
		Form form3("form 2", 0, 5);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
}