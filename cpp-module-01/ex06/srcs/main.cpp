/**
 * @file main.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-06-27
 * @brief test Harl class
 */

#include "Harl.hpp"

int main(int argc, char **argv) {
  Harl harl;

  if (argc != 2) {
    std::cout << "Usage: [program name] [level]\n";
    return (EXIT_FAILURE);
  }
  harl.complain(argv[1]);
  return EXIT_SUCCESS;
}
