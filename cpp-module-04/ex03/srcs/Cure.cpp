/**
 * @file Cure.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-19
 * @brief I heal you~~
 */

#include "Cure.hpp"

#include <iostream>

#include "Color.hpp"

Cure::Cure(void) : AMateria("cure") {}

Cure::Cure(const Cure& src) : AMateria("cure") { (void)src; }

Cure& Cure::operator=(const Cure& rhs) {
  (void)rhs;
  return (*this);
}

Cure* Cure::clone(void) const { return (new Cure()); }

void Cure::use(ICharacter& target) {
  std::cout << "* " << L_YELLOW << "heals " << RESET << target.getName()
            << "'s wound * \n";
}

Cure::~Cure(void) {}
