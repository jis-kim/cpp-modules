/**
 * @file main.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-23
 * @brief Let's test exceptions!!!!!!!
 */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void) {
  try {
    Intern someRandomIntern;
    Form* rrf;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    Bureaucrat br("someone", 13);

    br.signForm(*rrf);
    rrf->execute(br);

    Form* scf;
    scf = someRandomIntern.makeForm("shrubbery creation", "BERRYBBERY");

    Form* ppf;
    ppf = someRandomIntern.makeForm("presidential pardon", "prisoner");

    delete ppf;
    delete scf;
    delete rrf;
  } catch (const std::exception& e) {
    std::cout << e.what() << '\n';
  }
}
