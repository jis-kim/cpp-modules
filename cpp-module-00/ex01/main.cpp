/**
 * @file main.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-06-17
 * @brief
 */

#include "PhoneBook.hpp"

int main(void) {
  PhoneBook phoneBook;
  std::string cmd;
  // std::getline(std::cin, cmd);  // cin으로 하면 \n이 버퍼에 남는다.
  std::cin >> cmd;
  if (cmd.compare("ADD") == 0) {
    // std::getline(std::cin, cmd);
    std::cin >> cmd;
    std::cout << "hi\n";
  }
  std::cout << cmd << '\n';
  Contact contact(1, "hi", "my", "hello", "010-1234-5678", "bye");
  contact.PrintContact();
}
