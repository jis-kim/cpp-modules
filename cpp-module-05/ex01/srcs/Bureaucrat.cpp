/**
 * @file Bureaucrat.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-22
 * @brief implement of Bureaucrat
 */

#include "Form.hpp"

Bureaucrat::Bureaucrat(void) : name_("jiskim"), grade_(150) {}

Bureaucrat::Bureaucrat(const Bureaucrat& src)
    : name_(src.name_), grade_(src.grade_) {}

Bureaucrat::Bureaucrat(const std::string& name) : name_(name), grade_(150) {}

Bureaucrat::Bureaucrat(const std::string& name, const int grade) : name_(name) {
  if (grade < 1) throw GradeTooHighException();
  if (grade > 150) throw GradeTooLowException();
  grade_ = grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs) {
  grade_ = rhs.grade_;
  return (*this);
}

std::string Bureaucrat::getName(void) const { return name_; }

int Bureaucrat::getGrade(void) const { return grade_; }

void Bureaucrat::increaseGrade(void) {
  if (grade_ <= 1) throw GradeTooHighException();
  --grade_;
}

void Bureaucrat::decreaseGrade(void) {
  if (grade_ >= 150) throw GradeTooLowException();
  ++grade_;
}

void Bureaucrat::signForm(Form& form) {
  form.beSigned(*this);
  std::cout << name_ << " signed " << form.getName() << '\n';
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
  return "\033[1;33mGrade is too high.\033[0m";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
  return "\033[1;33mGrade is too low.\033[0m";
}

Bureaucrat::~Bureaucrat(void) {}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& rhs) {
  os << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
  return os;
}
