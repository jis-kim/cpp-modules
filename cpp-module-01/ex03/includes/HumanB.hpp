/**
 * @file HumanA.hpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-06-27
 * @brief Human who not always has weapon
 */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>

#include "Weapon.hpp"

class HumanB {
 private:
  std::string name_;
  Weapon* weapon_;

 public:
  HumanB(void);
  HumanB(std::string name);
  void setWeapon(Weapon& weapon);
  void attack(void);
  ~HumanB(void);
};

#endif  // HUMANB_HPP
