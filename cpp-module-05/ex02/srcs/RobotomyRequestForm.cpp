/**
 * @file RobotomyRequestForm.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-26
 * @brief drilling... robotomized done
 */

#include "RobotomyRequestForm.hpp"

#include <stdlib.h>
#include <time.h>

#include "Color.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src)
    : Form(src), target_(src.target_) {}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
    : Form("robotomyRequest", 72, 45), target_(target) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(
    const RobotomyRequestForm& rhs) {
  target_ = rhs.target_;
  this->Form::operator=(rhs);
  return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const {
  checkGrade(executor);
  std::cout << "* drillling noise * \n";
  static bool flag = true;

  if (flag) {
    srand(time(NULL));
    flag = false;
  }
  if (rand() & 1)
    std::cout << "congrats! " << L_GREEN << target_ << RESET
              << " has been successfully robotomized.\n";
  else
    std::cout << "Failed to robotomize " << L_GREEN << target_ << RESET
              << "!!!!\n";
}

RobotomyRequestForm::~RobotomyRequestForm(void) {}
