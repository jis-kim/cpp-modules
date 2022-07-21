/**
 * @file Ice.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-19
 * @brief ICY - ITZY
 */

#include "Ice.hpp"

#include <iostream>

#include "Color.hpp"
#include "ICharacter.hpp"

Ice::Ice(void) : AMateria("ice") {}

Ice::Ice(const Ice& src) : AMateria("ice") { (void)src; }

Ice& Ice::operator=(const Ice& rhs) {
  (void)rhs;
  return (*this);
}

Ice* Ice::clone(void) const { return (new Ice()); }

void Ice::use(ICharacter& target) {
  std::cout << "* shoots an " << L_CYAN << "ice bolt " << RESET << "at "
            << target.getName() << " *\n";
}

Ice::~Ice(void) {}
