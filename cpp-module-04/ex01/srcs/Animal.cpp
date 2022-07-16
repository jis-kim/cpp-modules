/**
 * @file Animal.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-14
 * @brief Animal implementation
 */

#include "Animal.hpp"

#include <iostream>

Animal::Animal(void) : type_("alien") {
  std::cout << L_BLUE << "Animal " << RESET << "Defalut Constructor.\n";
}

Animal::Animal(const Animal& src) : type_(src.type_) {
  std::cout << L_BLUE << "Animal " << RESET << "Copy Constructor.\n";
}

Animal& Animal::operator=(const Animal& rhs) {
  type_ = rhs.type_;
  std::cout << L_BLUE << "Animal " << RESET << "Assignment Operator.\n";
  return (*this);
}

void Animal::makeSound(void) const {
  std::cout << L_BLUE << type_ << RESET << " 10011011 that means m(cha(r))\n";
}

std::string Animal::getType(void) const { return (type_); }

Animal::~Animal(void) {
  std::cout << L_BLUE << "Animal " << RESET << "Destructor.\n";
}
