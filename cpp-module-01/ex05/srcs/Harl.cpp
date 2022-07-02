/**
 * @file Harl.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-01
 * @brief function pointer wow!
 */

#include "Harl.hpp"

void Harl::debug(void) { std::cout << "[ DEBUG ]\n I'm debug\n"; }

void Harl::info(void) {
  std::cout << "[ INFO ]\n Printing application information.\n";
}

void Harl::warning(void) {
  std::cout << "[ WARNING ]\n This is warning messege~~~~~~~~~ \n";
}

void Harl::error(void) {
  std::cout << "[ ERROR ]\n HEY! YOU OCCURED ERROR!!!!!\n";
}

void Harl::complain(std::string level) {
  if (level.size() == 0) {
    std::cout << "Try Again !!!!!!!!!!!\n";
    exit(1);
  }
  void (Harl::*ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning,
                                &Harl::error};
  std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
  for (int i = 0; i < 4; i++) {
    if (levels[i] == level) {
      (this->*ptr[i])();
      return;
    }
  }
}
