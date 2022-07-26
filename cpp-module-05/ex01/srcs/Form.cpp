/**
 * @file Form.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-23
 * @brief implement Form
 */

#include "Form.hpp"

#include "Color.hpp"

Form::Form(void)
    : name_("form"), signed_(false), signGrade_(150), executeGrade_(150) {}

Form::Form(const Form& src)
    : name_(src.name_),
      signed_(false),
      signGrade_(src.signGrade_),
      executeGrade_(src.executeGrade_) {}

Form::Form(const std::string& name)
    : name_(name), signed_(false), signGrade_(150), executeGrade_(150) {}

Form::Form(const std::string& name, const int signGrade, const int executeGrade)
    : name_(name),
      signed_(false),
      signGrade_(signGrade),
      executeGrade_(executeGrade) {
  if (signGrade < 1 || executeGrade < 1) throw GradeTooHighException();
  if (signGrade > 150 || executeGrade > 150) throw GradeTooLowException();
}

Form& Form::operator=(const Form& rhs) {
  signed_ = rhs.signed_;
  return (*this);
}

std::string Form::getName(void) const { return name_; }

bool Form::getSigned(void) const { return signed_; }

int Form::getSignGrade(void) const { return signGrade_; }

int Form::getExecuteGrade(void) const { return executeGrade_; }

void Form::beSigned(const Bureaucrat& signer) {
  if (signer.getGrade() > signGrade_) throw GradeTooLowException();
  signed_ = true;
}

Form::~Form(void) {}

const char* Form::GradeTooHighException::what() const throw() {
  return "\033[1;35mGrade is too high.\033[0m";
}

const char* Form::GradeTooLowException::what() const throw() {
  return "\033[1;35mGrade is too low.\033[0m";
}

std::ostream& operator<<(std::ostream& os, const Form& rhs) {
  os << "[" << rhs.getName() << "] "
     << "signable : " << rhs.getSignGrade()
     << ", executable : " << rhs.getExecuteGrade() << std::boolalpha << " ("
     << rhs.getSigned() << ")" << std::noboolalpha;
  return os;
}
