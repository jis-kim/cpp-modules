/**
 * @file HumanB.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-06-27
 * @brief Human who not always has weapon
 */

#include "HumanB.hpp"

HumanB::HumanB(void) : name_(""), weapon_(NULL) {}

HumanB::HumanB(std::string name) : name_(name), weapon_(NULL) {}

void HumanB::attack() {
  if (weapon_ == NULL)
    std::cout << name_ << " has no weapon!! So you will be zombie.\n";
  else
    std::cout << name_ << " attaks with their " << weapon_->getType() << '\n';
}

void HumanB::setWeapon(Weapon &weapon) { weapon_ = &weapon; }

HumanB::~HumanB(void) {}
