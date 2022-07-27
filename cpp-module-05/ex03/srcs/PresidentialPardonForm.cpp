/**
 * @file PresidentialPardonForm.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-26
 * @brief Zaphod Beeblebrox is the president of galaxy.
 */

#include "PresidentialPardonForm.hpp"

#include "Color.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form() {}

PresidentialPardonForm::PresidentialPardonForm(
    const PresidentialPardonForm& src)
    : Form(src), target_(src.target_) {}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
    : Form("presidential pardon", 25, 5), target_(target) {}

PresidentialPardonForm& PresidentialPardonForm::operator=(
    const PresidentialPardonForm& rhs) {
  target_ = rhs.target_;
  this->Form::operator=(rhs);
  return (*this);
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const {
  checkGrade(executor);
  std::cout << L_GREEN << target_ << RESET
            << " has been pardoned by Zaphod Beeblebrox.\n";
}

PresidentialPardonForm::~PresidentialPardonForm(void) {}
