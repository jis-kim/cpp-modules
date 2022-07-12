/**
 * @file FragTrap.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-11
 * @brief
 */

#include "FragTrap.hpp"

#include <iostream>

FragTrap::FragTrap(void) : ClapTrap() {
  hitPoints_ = 100;
  energyPoints_ = 100;
  attackDamage_ = 30;
  std::cout << L_GREEN << "FragTrap " << RESET
            << "Default Constructor called\n";
}
FragTrap::FragTrap(const FragTrap& src) : ClapTrap(src) {
  hitPoints_ = 100;
  energyPoints_ = 100;
  attackDamage_ = 30;
  std::cout << L_GREEN << "FragTrap " << RESET << "Copy Constructor called\n";
}
FragTrap::FragTrap(std::string name) : ClapTrap(name) {
  hitPoints_ = 100;
  energyPoints_ = 100;
  attackDamage_ = 30;
  std::cout << L_GREEN << "FragTrap " << RESET
            << "Constructor by name called\n";
}

// override
FragTrap& FragTrap::operator=(const FragTrap& rhs) {
  name_ = rhs.getName();
  hitPoints_ = rhs.getHitPoints();
  energyPoints_ = rhs.getEnergyPoints();
  attackDamage_ = rhs.getAttackDamage();
  std::cout << L_GREEN << "FragTrap " << RESET
            << "Assignment operator called\n";
  return (*this);
}

void FragTrap::highFiveGuys(void) {
  std::cout << L_GREEN << "FragTrap " << RESET << name_
            << " says Let's high five guys~~\n";
}

FragTrap::~FragTrap(void) {
  std::cout << L_GREEN << "FragTrap " << RESET << name_
            << " Destrctor called\n";
}
