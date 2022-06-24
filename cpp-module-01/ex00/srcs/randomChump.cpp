/**
 * @file randomChump.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-06-24
 * @brief It creates a zombie, name it, and the zombie announces itself
 */

#include "Zombie.hpp"

void randomChump(std::string name) {
  Zombie z(name);
  z.announce();
}
