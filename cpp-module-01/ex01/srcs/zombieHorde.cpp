/**
 * @file zombieHorde.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-06-25
 * @brief It must allocate N Zombie objects in a single allocation.
 */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
  Zombie* horde = new Zombie[N];
  for (int i = 0; i < N; ++i) {
    horde[i] = Zombie(name);
  }
  return horde;
}
