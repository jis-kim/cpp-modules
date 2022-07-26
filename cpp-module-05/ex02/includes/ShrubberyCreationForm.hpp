/**
 * @file ShrubberyCreationFrom.hpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-25
 * @brief Shruberry is 관상목
 */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

#define TREE \
  "\n\
       ###\n\
      #o###\n\
    #####o###\n\
   #o#\\#|#/###\n\
    ###\\|/#o#\n\
     # }|{  #\n\
       }|{\n\
"

class ShruberryCreationForm : public Form {
 private:
  std::string target_;

 public:
  ShruberryCreationForm(void);
  ShruberryCreationForm(const ShruberryCreationForm& src);
  ShruberryCreationForm(const std::string& target);

  ShruberryCreationForm& operator=(const ShruberryCreationForm& rhs);

  void execute(const Bureaucrat& executor) const;

  ~ShruberryCreationForm(void);
};

#endif  // SHRUBBERYCREATIONFORM_HPP
