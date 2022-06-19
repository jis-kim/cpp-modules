/**
 * @file main.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-06-17
 * @brief
 */

#include "PhoneBook.hpp"

int main(void) {
  std::string cmd;
  std::cin >> cmd;
  Contact *clist;
  if (cmd.compare("add") == 0) {
  }
  Contact contact(1, "hi", "my", "hello", "010-1234-5678", "bye");
  contact.PrintContact();
}
