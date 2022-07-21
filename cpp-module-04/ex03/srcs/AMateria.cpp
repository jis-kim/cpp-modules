/**
 * @file AMateria.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-19
 * @brief
 */

#include "AMateria.hpp"

#include <iostream>

#include "Color.hpp"

AMateria::AMateria(void) : type("") {}

AMateria::AMateria(const AMateria& src) : type(src.type) {}

AMateria::AMateria(std::string const& type) : type(type) {}

AMateria& AMateria::operator=(const AMateria& rhs) {
  type = rhs.getType();
  return (*this);
}

// Returns the materia type
std::string const& AMateria::getType(void) const { return (type); }

void AMateria::use(ICharacter& target) { (void)target; }

AMateria::~AMateria(void) {}
