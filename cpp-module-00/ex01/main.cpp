/**
 * @file main.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-06-17
 * @brief phonebook의 input을 받는다.
 */

#include "PhoneBook.hpp"

bool CheckStreamStatus(std::stringstream& stream) {
  if (stream.fail()) {
    if (stream.bad()) {
      std::cout << "istream has badbit.\n";
      exit(EXIT_FAILURE);
    }
    std::cout << "Unexpected input.\n";
    stream.clear();
    stream.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return (false);
  }
  return (true);
}

bool CheckStreamStatus(std::istream& stream) {
  if (stream.eof()) {
    std::cout << "Why did you do this?👻\n";
    exit(EXIT_SUCCESS);
  }
  if (stream.fail()) {
    if (stream.bad()) {
      std::cout << "istream has badbit.\n";
      exit(EXIT_FAILURE);
    }
    std::cout << "Unexpected input.\n";
    stream.clear();
    stream.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return (false);
  }
  return (true);
}

void InputContact(PhoneBook& phoneBook) {
  std::string first_name(""), last_name(""), nickname(""), phone_number(""),
      darkest_secret("");
  while (first_name.size() == 0) {
    std::cout << "Enter a first name: ";
    std::getline(std::cin, first_name);
    if (!CheckStreamStatus(std::cin)) return;
  }
  while (last_name.size() == 0) {
    std::cout << "Enter a last name: ";
    std::getline(std::cin, last_name);
    if (!CheckStreamStatus(std::cin)) return;
  }
  while (nickname.size() == 0) {
    std::cout << "Enter a nickname🤣: ";
    std::getline(std::cin, nickname);
    if (!CheckStreamStatus(std::cin)) return;
  }
  while (phone_number.size() == 0) {
    std::cout << "Enter a phone number📞: ";
    std::getline(std::cin, phone_number);
    if (!CheckStreamStatus(std::cin)) return;
  }
  while (darkest_secret.size() == 0) {
    std::cout << "Enter a darkest secret💀: ";
    std::getline(std::cin, darkest_secret);
    if (!CheckStreamStatus(std::cin)) return;
  }
  Contact contact(phoneBook.GetSize() + 1, first_name, last_name, nickname,
                  phone_number, darkest_secret);
  phoneBook.AddContact(contact);
  std::cout << "Successfully added a contact\n";
}

void SearchContact(PhoneBook& phoneBook, unsigned int size) {
  std::string index_str;
  std::cout << "Enter an index to search: ";
  std::getline(std::cin, index_str);
  if (index_str.size() == 1) {
    if (!CheckStreamStatus(std::cin)) return;
    unsigned int index;
    std::stringstream stream(index_str);
    stream >> index;
    if (!CheckStreamStatus(stream)) return;
    if (index <= size)
      phoneBook.SearchContact(index - 1);
    else
      std::cout << "Index is out of range.\n";
  }
  std::cout << "Invalid index\n";
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
        SearchContact(phoneBook, size);
      }
    } else if (cmd.compare("EXIT") == 0) {
      std::cout << "Goodbye!👋\n";
      return (0);
    } else {
      std::cout << "Invalid command\n";
    }
  }
}
