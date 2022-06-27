/**
 * @file main.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-06-27
 * @brief
 */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main() {
  {
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);  // 생성자로 weapon을 지정한다.
    bob.attack();             // crude spiked slub
    club.setType("some other type of club");
    bob.attack();  // some other type of club
  }
  {
    Weapon club = Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.setWeapon(club);  // setter로 weapon을 지정한다.
    jim.attack();         // crude spiked slub
    club.setType("some other type of club");
    jim.attack();  // some other type of club
  }
  return 0;
}
