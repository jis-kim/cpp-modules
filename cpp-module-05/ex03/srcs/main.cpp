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

    delete rrf;

    Form* shr;
    // ㅇㅏㄴ도ㅣㄴ다..
    shr = someRandomIntern.makeForm("sjribberu creation", "Bender");
  } catch (const std::exception& e) {
    std::cout << e.what() << '\n';
  }
}
