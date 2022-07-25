/**
 * @file main.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-23
 * @brief Let's test exceptions!!!!!!!
 */

#include "Form.hpp"

int main(void) {
  try {
    Form form("myForm", 72, 72);
    Bureaucrat king("king", 1);
    Bureaucrat jisu("jisu", 150);

    jisu.signForm(form);
    king.signForm(form);

    Form fake("fake", -1, -1);

    Bureaucrat bu("bu", 74);
    form.beSigned(bu);

    king.signForm(form);

  } catch (std::exception& e) {
    std::cout << e.what() << '\n';
  }
}
