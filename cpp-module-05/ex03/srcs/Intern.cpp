/**
 * @file Intern.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-27
 * @brief make make make form
 */

#include "Intern.hpp"

#include "Color.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(void) {}

Intern::Intern(const Intern& src) { (void)src; }

Intern& Intern::operator=(const Intern& rhs) {
  (void)rhs;
  return (*this);
}

Form* Intern::makeShrubberyCreationForm(const std::string& target) {
  return new ShruberryCreationForm(target);
}

Form* Intern::makeRobotomyRequestForm(const std::string& target) {
  return new RobotomyRequestForm(target);
}

Form* Intern::makePresidentialPardonForm(const std::string& target) {
  return new PresidentialPardonForm(target);
}

Form* Intern::makeForm(const std::string& name, const std::string& target) {
  std::string formNames[3] = {"shrubbery creation", "robotomy request",
                              "presidential pardon"};
  Form* (Intern::*f[3])(const std::string&) = {
      &Intern::makeShrubberyCreationForm, &Intern::makeRobotomyRequestForm,
      &Intern::makePresidentialPardonForm};
  Form* ret;

  int i;
  for (i = 0; i < 3; ++i) {
    if (formNames[i] == name) {
      ret = (this->*f[i])(target);
      break;
    }
  }
  if (i == 4) throw WrongFormNameException();
  std::cout << "Intern creates " << L_CYAN << name << '\n' << RESET;
  return (ret);
}

Intern::~Intern(void) {}

const char* Intern::WrongFormNameException::what() const throw() {
  return "\033[1;35Form name is wrong.\033[0m";
}
