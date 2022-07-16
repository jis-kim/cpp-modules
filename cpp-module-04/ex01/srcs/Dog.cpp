/**
 * @file Dog.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-14
 * @brief implement dog - ex00
 */

#include "Dog.hpp"

#include <iostream>

Dog::Dog(void) : Animal() {
  type_ = "Dog";
  std::cout << L_YELLOW << "Dog " << RESET << "Defalut Constructor.\n";
}

Dog::Dog(const Dog& src) : Animal(src) {
  type_ = "Dog";
  std::cout << L_YELLOW << "Dog " << RESET << "Copy Constructor.\n";
}

Dog& Dog::operator=(const Dog& rhs) {
  type_ = rhs.type_;
  std::cout << L_YELLOW << "Dog " << RESET << "Assignment Operator.\n";
  return (*this);
}

void Dog::makeSound(void) const {
  std::cout << L_YELLOW << type_ << RESET << " BARK!!!!!!!!! BARK!!!!!!!!!!.\n";
}

Dog::~Dog(void) { std::cout << L_YELLOW << "Dog " << RESET << "Destructor.\n"; }
