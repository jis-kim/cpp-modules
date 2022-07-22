/**
 * @file Bureaucrat.hpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-22
 * @brief Bureaucrat: an official in a government department, in particular one
 * perceived as being concerned with procedural correctness at the expense of
 * people's needs.
 */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <exception>
#include <string>

/**
 * @brief highest grade : 1, lowest grade : 150
 *
 */
class Bureaucrat {
 private:
  const std::string name_;
  int grade_;

 public:
  Bureaucrat(void);
  Bureaucrat(const Bureaucrat& src);

  Bureaucrat& operator=(const Bureaucrat& rhs) const;
  std::string getName(void) const;
  int getGrade(void) const;

  Bureaucrat& operator++(void);
  Bureaucrat& operator--(void);

  virtual ~Bureaucrat(void);

  /**
   * @brief don't have to be designed in Orthodox Canonical From.
   *
   */
  class GradeTooHighException : public std::exception {
    const char* what() const throw();
  };

  class GradeTooLowException : public std::exception {
    const char* what() const throw();
  };
};

#endif  // BUREAUCRAT_HPP
