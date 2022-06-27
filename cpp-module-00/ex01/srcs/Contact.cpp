/**
 * @file Contact.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-06-17
 * @brief
 */

#include "Contact.hpp"

Contact::Contact(void)
    : index_(0),
      first_name_(""),
      last_name_(""),
      nickname_(""),
      phone_number_(""),
      darkest_secret_("") {}

Contact::Contact(int index, std::string first_name, std::string last_name,
                 std::string nickname, std::string phone_number,
                 std::string darkest_secret)
    : index_(index),
      first_name_(first_name),
      last_name_(last_name),
      nickname_(nickname),
      phone_number_(phone_number),
      darkest_secret_(darkest_secret) {}

std::string Contact::getFirstName(void) { return first_name_; }
std::string Contact::getLastName(void) { return last_name_; }
std::string Contact::getNickname(void) { return nickname_; }
std::string Contact::getPhoneNumber(void) { return phone_number_; }
std::string Contact::getDarkestSecret(void) { return darkest_secret_; }

void Contact::setFirstName(std::string first_name) { first_name_ = first_name; }
void Contact::setLastName(std::string last_name) { last_name_ = last_name; }
void Contact::setNickname(std::string nickname) { nickname_ = nickname; }
void Contact::setPhoneNumber(std::string phone_number) {
  phone_number_ = phone_number;
}
void Contact::setDarkestSecret(std::string darkest_secret) {
  darkest_secret_ = darkest_secret;
}

void Contact::printField(std::string field) {
  std::string str = field.substr(0, 9);
  if (field.size() > 9) {
    std::cout.width(9);
    str += '.';
  } else
    std::cout.width(10);
  std::cout << std::right << str << '|';
}

void Contact::printContact(void) {
  std::cout << "|";
  std::cout.width(10);
  std::cout << std::right << index_ << '|';
  printField(first_name_);
  printField(last_name_);
  printField(nickname_);
  std::cout << "\n";
}

void Contact::printSpecificContact(void) {
  std::cout << "index: " << index_ << '\n';
  std::cout << "first name: " << first_name_ << '\n';
  std::cout << "last name: " << last_name_ << '\n';
  std::cout << "nickname🤣: " << nickname_ << '\n';
  std::cout << "phone number📞: " << phone_number_ << '\n';
  std::cout << "darkest secret💀: " << darkest_secret_ << '\n';
}
