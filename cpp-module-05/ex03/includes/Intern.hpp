/**
 * @file Intern.hpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-27
 * @brief makes form
 */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>

class Form;

class Intern {
 public:
  Intern(void);
  Intern(const Intern& src);

  Intern& operator=(const Intern& rhs);

  Form* makeShrubberyCreationForm(const std::string& target);
  Form* makeRobotomyRequestForm(const std::string& target);
  Form* makePresidentialPardonForm(const std::string& target);
  Form* makeForm(const std::string& name, const std::string& target);

  ~Intern(void);

  class WrongFormNameException : public std::exception {
    const char* what() const throw();
  };
};

#endif  // INTERN_HPP
