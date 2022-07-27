/**
 * @file RobotomyRequestForm.hpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-26
 * @brief robotomy is animation.. wow 42 is amazing~~
 */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form {
 private:
  std::string target_;

 public:
  RobotomyRequestForm(void);
  RobotomyRequestForm(const RobotomyRequestForm& src);
  RobotomyRequestForm(const std::string& target);

  RobotomyRequestForm& operator=(const RobotomyRequestForm& rhs);

  void execute(const Bureaucrat& executor) const;

  ~RobotomyRequestForm(void);
};

#endif  // ROBOTOMYREQUESTFORM_HPP
