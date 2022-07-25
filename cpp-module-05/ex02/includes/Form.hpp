/**
 * @file Form.hpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-23
 * @brief bureaucats sign to form...Am I maggots?
 */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form {
 private:
  const std::string name_;
  bool signed_;
  const int signGrade_;
  const int executeGrade_;

 public:
  Form(void);
  Form(const Form& src);
  Form(const std::string& name);
  Form(const std::string& name, const int signGrade, const int executeGrade);

  Form& operator=(const Form& rhs);

  std::string getName(void) const;
  bool getSigned(void) const;
  int getSignGrade(void) const;
  int getExecuteGrade(void) const;

  void beSigned(const Bureaucrat& b);
  virtual void execute(const Bureaucrat& executor) const = 0;

  virtual ~Form(void);

  class GradeTooHighException : public std::exception {
    const char* what() const throw();
  };

  class GradeTooLowException : public std::exception {
    const char* what() const throw();
  };

  class UnsignedFormException : public std::exception {
    const char* what() const throw();
  };
};

std::ostream& operator<<(std::ostream& os, const Form& rhs);

#endif  // FORM_HPP
