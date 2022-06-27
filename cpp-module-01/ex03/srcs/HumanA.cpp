/**
 * @file HumanA.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-06-27
 * @brief Human who always has weapon
 */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
    : name_(name), weapon_(weapon) {}

void HumanA::attack() {
  std::cout << name_ << " attaks with their " << weapon_.getType() << '\n';
}

HumanA::~HumanA(void) {}
