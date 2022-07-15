/**
 * @file WrongCat.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-14
 * @brief implement cat - ex00
 */

#include "WrongCat.hpp"

#include <iostream>

WrongCat::WrongCat(void) : WrongAnimal() {
  type_ = "WrongCat";
  std::cout << L_RED << "Wrong " << L_CYAN << "Cat " << RESET
            << "Defalut Constructor.\n";
}

WrongCat::WrongCat(WrongCat& src) : WrongAnimal(src) {
  type_ = "WrongCat";
  std::cout << L_RED << "Wrong " << L_CYAN << "Cat " << RESET
            << "Copy Constructor.\n";
}

WrongCat& WrongCat::operator=(const WrongCat& rhs) {
  type_ = rhs.type_;
  std::cout << L_RED << "Wrong " << L_CYAN << "Cat " << RESET
            << "Assignment Operator.\n";
  return (*this);
}

void WrongCat::makeSound(void) const {
  std::cout << L_CYAN << type_ << RESET << " M E O W M E O W.\n";
}

WrongCat::~WrongCat(void) {
  std::cout << L_RED << "Wrong " << L_CYAN << "Cat " << RESET
            << "Destructor.\n";
}
