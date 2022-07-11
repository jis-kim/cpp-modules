/**
 * @file main.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-07
 * @brief test ScavTrap class
 */

#include <iostream>

#include "ScavTrap.hpp"

int main(void) {
  ScavTrap jule("yongjule");
  ScavTrap ghan("ghan");

  if (jule.isActionable()) {
    jule.attack(ghan.getName());
    ghan.takeDamage(jule.getAttackDamage());
  } else {
    std::cout << L_YELLOW << jule.getName() << RESET << " has no energy...\n";
  }

  std::cout << L_YELLOW << "\n"
            << ghan.getName() << RESET
            << " was upset so he decided to call nkim and get back at "
            << L_YELLOW << jule.getName() << ".\n\n"
            << RESET;

  ClapTrap nkim("nkim");

  if (ghan.isActionable()) {
    ghan.attack(jule.getName());
    jule.takeDamage(ghan.getAttackDamage());
  } else {
    std::cout << L_YELLOW << ghan.getName() << RESET << " has no energy...\n";
  }
  if (nkim.isActionable()) {
    nkim.attack(jule.getName());
    jule.takeDamage(nkim.getAttackDamage());
  } else {
    std::cout << L_YELLOW << nkim.getName() << RESET << " has no energy...\n";
  }

  std::cout << L_YELLOW << "\n"
            << ghan.getName() << RESET
            << " was able to clone himself so he did it.\n\n";

  ScavTrap ghan2(ghan);
  ScavTrap ghan3;
  ghan3 = ghan;

  if (ghan.isActionable()) {
    ghan.attack(jule.getName());
    jule.takeDamage(ghan.getAttackDamage());
  } else {
    std::cout << L_YELLOW << ghan.getName() << RESET << " has no energy...\n";
  }
  if (ghan2.isActionable()) {
    ghan2.attack(jule.getName());
    jule.takeDamage(ghan2.getAttackDamage());
  } else {
    std::cout << L_YELLOW << ghan2.getName() << RESET << " has no energy...\n";
  }
  ghan3.setEnergyPoints(0);
  if (ghan3.isActionable()) {
    ghan.attack(jule.getName());
    jule.takeDamage(ghan3.getAttackDamage());
  } else {
    std::cout << L_YELLOW << ghan3.getName() << RESET << " has no energy...\n";
  }

  if (jule.isActionable()) {
    jule.beRepaired(10);
  } else {
    std::cout << L_YELLOW << jule.getName() << RESET << " has no energy...\n";
  }

  std::cout << L_YELLOW << ghan.getName() << RESET
            << "\'s revenge is successfully ended...\n\n";

  return EXIT_SUCCESS;
}
