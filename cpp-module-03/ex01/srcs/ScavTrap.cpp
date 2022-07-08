/**
 * @file ScavTrap.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-08
 * @brief ScavTrap is npc in borderland too.
 */

#include "ScavTrap.hpp"

#include <iostream>

ScavTrap::ScavTrap(void) : ClapTrap() {
  hitPoints_ = 10;
  // TODO: fill extra variables for scavtrap
  std::cout << L_CYAN << "ClapTrap " << RESET << "Default Constructor called\n";
}
ScavTrap::ScavTrap(const ScavTrap& src);
ScavTrap::ScavTrap(std::string name);

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs);

void ScavTrap::guardGate(void);

~ScavTrap::ScavTrap(void);
