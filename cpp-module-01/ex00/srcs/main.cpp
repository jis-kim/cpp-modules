/**
 * @file main.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-06-24
 * @brief test code of Zombie class.
 */

#include <unistd.h>

#include "Zombie.hpp"

void ZombieTest(void) {
  randomChump("baboZombie");
  Zombie *chunjae = newZombie("chunjaeZombie");
  chunjae->announce();
  delete chunjae;
}

int main(void) {
  ZombieTest();
  return 0;
}
