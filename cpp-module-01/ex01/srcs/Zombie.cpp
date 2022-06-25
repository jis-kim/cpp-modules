/**
 * @file Zombie.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-06-24
 * @brief
 */

#include "Zombie.hpp"

Zombie::Zombie(void) : name("") {}

Zombie::Zombie(std::string name) : name(name) {}

void Zombie::announce(void) { std::cout << name << " BraiiiiiiinnnzzzZ...\n"; }

Zombie::~Zombie(void) {}
