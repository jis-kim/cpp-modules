/**
 * @file Cat.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-14
 * @brief implement cat - ex00
 */

#include "Cat.hpp"

#include <iostream>

Cat::Cat(void) : Animal() {
  type_ = "Cat";
  brain_ = new Brain();
  std::cout << L_CYAN << "Cat " << RESET << "Defalut Constructor.\n";
}

Cat::Cat(const Cat& src) : Animal(src) {
  type_ = "Cat";
  brain_ = new Brain();
  std::cout << L_CYAN << "Cat " << RESET << "Copy Constructor.\n";
}

Cat& Cat::operator=(const Cat& rhs) {
  type_ = rhs.type_;
  brain_ = rhs.brain_;
  std::cout << L_CYAN << "Cat " << RESET << "Assignment Operator.\n";
  return (*this);
}

void Cat::makeSound(void) const {
  std::cout << L_CYAN << type_ << RESET << " M E O W M E O W.\n";
}

Cat::~Cat(void) {
  delete brain_;
  std::cout << L_CYAN << "Cat " << RESET << "Destructor.\n";
}