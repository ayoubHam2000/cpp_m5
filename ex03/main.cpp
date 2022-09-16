#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int	main()
{
	try
	{
		{
			Intern	someRandomIntern;
			Form*	rrf;
			rrf = someRandomIntern.makeForm("PresidentialPardon", "Bender");
			std::cout << *rrf << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}
