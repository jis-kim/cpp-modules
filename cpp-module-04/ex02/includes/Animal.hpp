/**
 * @file Animal.hpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-14
 * @brief Base Class - ex02
 */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#define L_CYAN "\033[1;96m"
#define L_RED "\033[1;31m"
#define L_YELLOW "\033[1;33m"
#define L_PURPLE "\033[1;35m"
#define L_GREEN "\033[1;32m"
#define L_BLUE "\033[1;94m"
#define RESET "\033[0m"

#include <string>

class Animal {
 protected:
  std::string type_;

 public:
  Animal(void);
  Animal(const Animal& src);

  Animal& operator=(const Animal& rhs);

  virtual void makeSound(void) const = 0;
  std::string getType(void) const;

  virtual ~Animal(void);
};

#endif  // ANIMAL_HPP
