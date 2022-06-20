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

std::string Contact::GetFirstName(void) { return first_name_; }
std::string Contact::GetLastName(void) { return last_name_; }
std::string Contact::GetNickname(void) { return nickname_; }
std::string Contact::GetPhoneNumber(void) { return phone_number_; }
std::string Contact::GetDarkestSecret(void) { return darkest_secret_; }

void Contact::SetFirstName(std::string first_name) { first_name_ = first_name; }
void Contact::SetLastName(std::string last_name) { last_name_ = last_name; }
void Contact::SetNickname(std::string nickname) { nickname_ = nickname; }
void Contact::SetPhoneNumber(std::string phone_number) {
  phone_number_ = phone_number;
}
void Contact::SetDarkestSecret(std::string darkest_secret) {
  darkest_secret_ = darkest_secret;
}

void Contact::PrintField(std::string field) {
  std::string str = field.substr(0, 9);
  if (field.size() > 9) {
    std::cout.width(9);
    str += '.';
  } else
    std::cout.width(10);
  std::cout << std::right << str << '|';
}

void Contact::PrintContact(void) {
  std::cout << "|";
  std::cout.width(10);
  std::cout << std::right << index_ << '|';
  PrintField(first_name_);
  PrintField(last_name_);
  PrintField(nickname_);
  std::cout << "\n";
}

void Contact::PrintSpecificContact(void) {
  std::cout << "|";
  std::cout.width(10);
  std::cout << std::right << index_ << '|';
  PrintField(first_name_);
  PrintField(last_name_);
  PrintField(nickname_);
  PrintField(phone_number_);
  PrintField(darkest_secret_);
  std::cout << "\n";
}
