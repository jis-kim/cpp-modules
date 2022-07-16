/**
 * @file WrongAnimal.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-14
 * @brief WrongAnimal implementation
 */

#include "WrongAnimal.hpp"

#include <iostream>

WrongAnimal::WrongAnimal(void) : type_("alien") {
  std::cout << L_RED << "Wrong " << L_BLUE << "Animal " << RESET
            << "Defalut Constructor.\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& src) : type_(src.type_) {
  std::cout << L_RED << "Wrong " << L_BLUE << "Animal " << RESET
            << "Copy Constructor.\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs) {
  type_ = rhs.type_;
  std::cout << L_RED << "Wrong " << L_BLUE << "Animal " << RESET
            << "Assignment Operator.\n";
  return (*this);
}

void WrongAnimal::makeSound(void) const {
  std::cout << L_RED << "Wrong " << L_CYAN << type_ << RESET
            << " 10011011 that means m(cha(r))\n";
}

std::string WrongAnimal::getType(void) const { return (type_); }

WrongAnimal::~WrongAnimal(void) {
  std::cout << L_RED << "Wrong " << L_BLUE << "Animal " << RESET
            << "Destructor.\n";
}
