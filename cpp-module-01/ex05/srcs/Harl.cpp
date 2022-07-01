/**
 * @file Harl.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-01
 * @brief function pointer wow!
 */

#include "Harl.hpp"

Harl::Harl(void) : ptr_(&Harl::debug) {}

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
    std::cout << "ㅡㅡ Try Again !!!!!!!!!!!\n";
    exit(1);
  }
  (this->*ptr_)();  //왜 this 해야됨??
}
