/**
 * @file main.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-06-24
 * @brief test code of Zombie class.
 */

#include "Zombie.hpp"

int testZombieHorde(const int& cnt, const std::string name) throw() {
  try {
    Zombie* ZombieHorde = zombieHorde(cnt, name);
    for (int i = 0; i < cnt; ++i) {
      std::cout << "Zombie " << i << " : ";
      ZombieHorde[i].announce();
    }
    delete[] ZombieHorde;
    return EXIT_SUCCESS;
  } catch (std::bad_alloc& e) {
    std::cout << "ZombieHorde: " << e.what() << ": Array Size N was " << cnt
              << '\n';
    return EXIT_FAILURE;
  } catch (std::exception& e) {
    std::cout << "ZombieHorde: " << e.what() << '\n';
    return EXIT_FAILURE;
  }
}

int main(int argc, char** argv) {
  if (argc != 3) {
    std::cout << "Usage: [program name] [N] [Zombiename]\n";
    return EXIT_FAILURE;
  }
  std::stringstream ss(argv[1]);
  int N;
  ss >> N;
  if (ss.fail()) {
    std::cout << "N must be Integer type\n";
  }
  int ret = testZombieHorde(N, argv[2]);
  return (ret);
}
