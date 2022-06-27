/**
 * @file HumanA.hpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-06-27
 * @brief Human who always has weapon
 */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string>

#include "Weapon.hpp"

class HumanA {
 private:
  std::string name_;
  Weapon& weapon_;

 public:
  HumanA(std::string name, Weapon& weapon);
  void attack(void);
  ~HumanA(void);
};

#endif  // HUMANA_HPP
