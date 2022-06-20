/**
 * @file main.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-06-17
 * @brief phonebook의 input을 받는다.
 */

#include "PhoneBook.hpp"

bool CheckStreamStatus() {
  if (std::cin.eof()) {
    std::cout << "Why did you do this?👻\n";
    exit(EXIT_SUCCESS);
  }
  if (std::cin.fail()) {
    if (std::cin.bad()) {
      std::cout << "istream has badbit.\n";
      exit(EXIT_FAILURE);
    }
    std::cout << "Unexpected input.\n";
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return (true);
  }
  return (false);
}

void InputContact(PhoneBook &phoneBook) {
  std::string first_name(""), last_name(""), nickname(""), phone_number(""),
      darkest_secret("");
  while (first_name.size() == 0) {
    std::cout << "Enter a first name: ";
    std::getline(std::cin, first_name);
    if (CheckStreamStatus()) return;
  }
  while (last_name.size() == 0) {
    std::cout << "Enter a last name: ";
    std::getline(std::cin, last_name);
    if (CheckStreamStatus()) return;
  }
  while (nickname.size() == 0) {
    std::cout << "Enter a nickname🤣: ";
    std::getline(std::cin, nickname);
    if (CheckStreamStatus()) return;
  }
  while (phone_number.size() == 0) {
    std::cout << "Enter a phone number📞: ";
    std::getline(std::cin, phone_number);
    if (CheckStreamStatus()) return;
  }
  while (darkest_secret.size() == 0) {
    std::cout << "Enter a darkest secret💀: ";
    std::getline(std::cin, darkest_secret);
    if (CheckStreamStatus()) return;
  }
  Contact contact(phoneBook.GetSize() + 1, first_name, last_name, nickname,
                  phone_number, darkest_secret);
  phoneBook.AddContact(contact);
  std::cout << "Successfully added a contact\n";
}

int main(void) {
  PhoneBook phoneBook;
  std::string cmd;

  while (!std::cin.fail()) {
    std::cout << "Enter a command(ADD, SEARCH, EXIT): ";
    std::getline(std::cin, cmd);
    if (cmd.compare("ADD") == 0) {
      InputContact(phoneBook);
    } else if (cmd.compare("SEARCH") == 0) {
      unsigned int size = phoneBook.GetSize();
      if (size == 0) {
        std::cout << "PhoneBook is empty\n";
      } else {
        phoneBook.PrintPhoneBook();
        unsigned int index;
        std::cout << "Enter an index to search: ";
        std::cin >> index;
        std::getline(std::cin, cmd);
        int fail = CheckStreamStatus();
        if (!fail) {
          if (index < size) {
            phoneBook.SearchContact(index - 1);
          } else {
            std::cout << "Index is out of range.\n";
          }
        }
      }
    } else if (cmd.compare("EXIT") == 0) {
      std::cout << "Goodbye!👋\n";
      return (0);
    } else {
      std::cout << "Invalid command\n";
    }
  }
}
