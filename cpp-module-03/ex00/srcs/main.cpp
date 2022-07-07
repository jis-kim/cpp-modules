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

  jule.attack(ghan.getName());
  ghan.takeDamage(jule.getAttackDamage());

  std::cout << L_YELLOW << "\nghan" << RESET
            << " was upset so he decided to call nkim and get back at "
            << L_YELLOW << "jule.\n\n"
            << RESET;

  ClapTrap nkim("nkim");

  ghan.attack(jule.getName());
  jule.takeDamage(ghan.getAttackDamage());
  nkim.attack(jule.getName());
  jule.takeDamage(nkim.getAttackDamage());

  std::cout << L_YELLOW << "\nghan" << RESET
            << " was able to clone himself so he did it.\n\n";

  ClapTrap ghan2(ghan);
  ClapTrap ghan3;
  ghan3 = ghan;

  ghan.attack(jule.getName());
  jule.takeDamage(ghan.getAttackDamage());
  ghan2.attack(jule.getName());
  jule.takeDamage(ghan2.getAttackDamage());
  ghan3.attack(jule.getName());
  jule.takeDamage(ghan3.getAttackDamage());

  std::cout << "\nbut" << L_YELLOW << " ghan" << RESET
            << " was too weak to damage someone...\n\n";

  return EXIT_SUCCESS;
}
