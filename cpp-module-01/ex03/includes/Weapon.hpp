/**
 * @file Weapon.hpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-06-27
 * @brief DO NOT USE WEAPON FOR LOVE AND PEACE
 */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
 private:
  std::string type_;

 public:
  Weapon(void);
  Weapon(std::string type);
  std::string getType(void);
  void setType(std::string type);
};

#endif  // WEAPON_HPP
