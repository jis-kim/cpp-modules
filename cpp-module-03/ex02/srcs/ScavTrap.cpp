/**
 * @file ScavTrap.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-08
 * @brief ScavTrap is npc in borderland too.
 */

#include "ScavTrap.hpp"

#include <iostream>

ScavTrap::ScavTrap(void) : ClapTrap() {
  hitPoints_ = 100;
  energyPoints_ = 50;
  attackDamage_ = 20;
  std::cout << L_CYAN << "ScavTrap " << RESET << "Default Constructor called\n";
}
ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap(src) {
  hitPoints_ = 100;
  energyPoints_ = 50;
  attackDamage_ = 20;
  std::cout << L_CYAN << "ScavTrap " << RESET << "Copy Constructor called\n";
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
  hitPoints_ = 100;
  energyPoints_ = 50;
  attackDamage_ = 20;
  std::cout << L_CYAN << "ScavTrap " << RESET << "Constructor by name called\n";
}

// override
ScavTrap& ScavTrap::operator=(const ScavTrap& rhs) {
  name_ = rhs.getName();
  hitPoints_ = rhs.getHitPoints();
  energyPoints_ = rhs.getEnergyPoints();
  attackDamage_ = rhs.getAttackDamage();
  std::cout << L_CYAN << "ScavTrap " << RESET << "Assignment operator called\n";
  return (*this);
}

// override
void ScavTrap::attack(const std::string& target) {
  std::cout << L_CYAN << "ScavTrap " << RESET << L_YELLOW << name_ << RESET
            << " attacks " << L_YELLOW << target << RESET << " ," << L_RED
            << " causing " << L_RED << attackDamage_ << RESET
            << " points of damage!\n"
            << RESET;
}

void ScavTrap::guardGate(void) {
  std::cout << L_CYAN << "ScavTrap " << RESET << name_
            << " is now in Gatekeeper mode\n";
}

ScavTrap::~ScavTrap(void) {
  std::cout << L_CYAN << "ScavTrap " << RESET << name_ << " Destrctor called\n";
}
