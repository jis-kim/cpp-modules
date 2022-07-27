/**
 * @file PresidentialPardonForm.hpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-26
 * @brief prisoner gets FREEDOM!!
 */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {
 private:
  std::string target_;

 public:
  PresidentialPardonForm(void);
  PresidentialPardonForm(const PresidentialPardonForm& src);
  PresidentialPardonForm(const std::string& target);

  PresidentialPardonForm& operator=(const PresidentialPardonForm& rhs);

  void execute(const Bureaucrat& executor) const;

  ~PresidentialPardonForm(void);
};

#endif  // PRESIDENTIALPARDONFORM_HPP
