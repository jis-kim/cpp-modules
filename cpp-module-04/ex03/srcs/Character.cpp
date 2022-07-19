/**
 * @file Character.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-19
 * @brief character
 */

#include "Character.hpp"

Character::Character(void) : name_("jisu") {
  memset(inventory_, 0, sizeof(AMateria*) * 4);
}
Character::Character(const std::string name) : name_(name) {
  memset(inventory_, 0, sizeof(AMateria*) * 4);
}

Character::Character(const Character& src) : name_(src.name_) {
  for (int i = 0; i < 4; ++i) {
    inventory_[i] = (src.inventory_)[i];
  }
}

Character& Character::operator=(const Character& rhs) {
  name_ = rhs.name_;
  for (int i = 0; i < 4; ++i) {
    inventory_[i] = (rhs.inventory_)[i];
  }
}

std::string const& Character::getName(void) const { return (name_); }

void Character::equip(AMateria* m) {}

void Character::unequip(int idx) {}
void Character::use(int idx, ICharacter& target) {}

Character::~Character(void) {}
