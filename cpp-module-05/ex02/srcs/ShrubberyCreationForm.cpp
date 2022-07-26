/**
 * @file ShrubberyCreationForm.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-25
 * @brief draw tree
 */

#include "ShrubberyCreationForm.hpp"

#include <fstream>

ShruberryCreationForm::ShruberryCreationForm(void) : Form() {}

ShruberryCreationForm::ShruberryCreationForm(const ShruberryCreationForm& src)
    : Form(src), target_(src.target_) {}

ShruberryCreationForm::ShruberryCreationForm(const std::string& target)
    : Form("shruberryCreation", 145, 137), target_(target) {}

ShruberryCreationForm& ShruberryCreationForm::operator=(
    const ShruberryCreationForm& rhs) {
  target_ = rhs.target_;
  this->Form::operator=(rhs);
  return (*this);
}

void ShruberryCreationForm::execute(const Bureaucrat& executor) const {
  checkGrade(executor);
  std::ofstream output;
  output.exceptions(std::ofstream::failbit | std::ofstream::badbit);
  output.open(target_ + "_shrubbery", std::fstream::out);
  output << TREE;
  output.close();
}

ShruberryCreationForm::~ShruberryCreationForm(void) {}
