/**
 * @file WrongDog.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-14
 * @brief implement dog - ex00
 */

#include "WrongDog.hpp"

#include <iostream>

WrongDog::WrongDog(void) : WrongAnimal() {
  type_ = "WrongDog";
  std::cout << L_RED << "Wrong " << L_YELLOW << "Dog " << RESET
            << "Defalut Constructor.\n";
}

WrongDog::WrongDog(const WrongDog& src) : WrongAnimal(src) {
  type_ = "WrongDog";
  std::cout << L_RED << "Wrong " << L_YELLOW << "Dog " << RESET
            << "Copy Constructor.\n";
}

WrongDog& WrongDog::operator=(const WrongDog& rhs) {
  type_ = rhs.type_;
  std::cout << L_RED << "Wrong " << L_YELLOW << "Dog " << RESET
            << "Assignment Operator.\n";
  return (*this);
}

void WrongDog::makeSound(void) const {
  std::cout << L_YELLOW << type_ << RESET << " BARK!!!!!!!!! BARK!!!!!!!!!!.\n";
}

WrongDog::~WrongDog(void) {
  std::cout << L_RED << "Wrong " << L_YELLOW << "Dog " << RESET
            << "Destructor.\n";
}
