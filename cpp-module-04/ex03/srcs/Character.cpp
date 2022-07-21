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
    if (inventory_[i]) delete inventory_[i];
    inventory_[i] = (src.inventory_[i])->clone();
  }
}

Character& Character::operator=(const Character& rhs) {
  name_ = rhs.name_;
  for (int i = 0; i < 4; ++i) {
    if (inventory_[i]) delete inventory_[i];
    inventory_[i] = (rhs.inventory_[i])->clone();
  }
  return (*this);
}

std::string const& Character::getName(void) const { return (name_); }

void Character::equip(AMateria* m) {
  for (int i = 0; i < 4; i++) {
    if (!inventory_[i]) {
      inventory_[i] = m;
      break;
    }
  }
}

/**
 * @brief do not delete!!
 *
 * @param idx
 */
void Character::unequip(int idx) {
  if (idx < 0 || idx > 3)
    std::cout << L_RED << "index is out of range.\n" << RESET;
  else
    inventory_[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
  if (idx < 0 || idx > 3)
    std::cout << L_RED << "index is out of range.\n" << RESET;
  else if (inventory_[idx])
    (inventory_[idx])->use(target);
}

Character::~Character(void) {
  for (int i = 3; i >= 0; --i) delete inventory_[i];
}
