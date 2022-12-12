#include "Bureaucrat.hpp"

int main(void){

	Bureaucrat bureaucrat1("Raoni1", 1);
	Bureaucrat bureaucrat2("Raoni2", 150);

	//test1 - increment too high
	try{
		bureaucrat1.incrementBureaucratGrade();
		std::cout << bureaucrat1 << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	//test2 - decrement too slow
	try{
		bureaucrat2.decrementBureaucratGrade();
		std::cout << bureaucrat1 << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	//test3 - increment & decrement ok
	try{
		bureaucrat1.decrementBureaucratGrade();
		bureaucrat2.incrementBureaucratGrade();
		std::cout << bureaucrat1 << std::endl;
		std::cout << bureaucrat2 << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	//test4 - create obj with grade too high
	try{
		Bureaucrat bureaucrat3("Raoni3", 0);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	//test5 - create obj with grade too low
	try{
		Bureaucrat bureaucrat4("Raoni4", 151);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

}