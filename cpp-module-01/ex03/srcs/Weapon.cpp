/**
 * @file Weapon.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-06-27
 * @brief weapon
 */

#include "Weapon.hpp"

Weapon::Weapon(void) : type_("") {}

Weapon::Weapon(std::string type) : type_(type) {}

std::string Weapon::getType(void) { return type_; }

void Weapon::setType(std::string type) { type_ = type; }
