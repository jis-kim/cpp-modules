/**
 * @file newZombie.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-06-24
 * @brief It creates a zombie, name it, and return it so you can use it outside
of the function scope.
 */

#include "Zombie.hpp"

Zombie *newZombie(std::string name) {
  Zombie *z = new Zombie(name);
  return z;
}
