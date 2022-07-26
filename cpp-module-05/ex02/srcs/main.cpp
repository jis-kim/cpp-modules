/**
 * @file main.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-23
 * @brief Let's test exceptions!!!!!!!
 */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void) {
  try {
    ShruberryCreationForm sh("shell");   // 145, 137
    RobotomyRequestForm rb("rbtree");    // 72, 45
    PresidentialPardonForm pf("proof");  // 25, 5

    Bureaucrat jisu("jisu", 11);

    // jisu.executeForm(sh);

    jisu.signForm(sh);
    jisu.signForm(rb);
    jisu.signForm(pf);

    std::cout << '\n';

    jisu.executeForm(sh);
    jisu.executeForm(rb);
    // jisu.executeForm(pf);  // throw exception

    std::cout << '\n';

    Bureaucrat king("AMAZING KING", 1);
    king.executeForm(sh);
    king.executeForm(rb);
    king.executeForm(pf);

    std::cout << '\n';

    Bureaucrat jule("jule", 150);

  } catch (const std::exception& e) {
    std::cout << e.what() << '\n';
  }
}
