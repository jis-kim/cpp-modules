/**
 * @file Zombie.hpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-06-24
 * @brief zombie announce "Braniiinnnzzzzz"
 */

#include <iostream>
#include <sstream>
#include <string>

class Zombie {
 private:
  std::string name;

 public:
  Zombie(void);
  Zombie(std::string name);
  void announce(void);
  ~Zombie(void);
};

Zombie* zombieHorde(int N, std::string name);
