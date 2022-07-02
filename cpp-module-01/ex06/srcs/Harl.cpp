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

  int levelType;
  for (levelType = 0; levelType < 4; levelType++)
    if (levels[levelType] == level) break;
  switch (levelType) {
    case DEBUG:
      (this->*ptr[DEBUG])();
    case INFO:
      (this->*ptr[INFO])();
    case WARNING:
      (this->*ptr[WARNING])();
    case ERROR:
      (this->*ptr[ERROR])();
      break;
    default:
      std::cout << "[ Probably complaining about insignificant problems ]\n";
  }
}
