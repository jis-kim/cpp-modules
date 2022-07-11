/**
 * @file main.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-07
 * @brief test ClapTrap class
 */

#include <iostream>

#include "ClapTrap.hpp"

int main(void) {
  ClapTrap jule("yongjule");
  ClapTrap ghan("ghan");

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

  ClapTrap ghan2(ghan);
  ClapTrap ghan3;
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

  std::cout << "\nbut " << L_YELLOW << ghan.getName() << RESET
            << " was too weak to damage someone...\n\n";

  return EXIT_SUCCESS;
}
