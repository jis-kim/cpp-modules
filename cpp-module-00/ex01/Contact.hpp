/**
 * @file Contact.hpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-06-17
 * @brief
 */

#ifndef CONTACT_HPP_
#define CONTACT_HPP_

#include <iomanip>
#include <iostream>
#include <string>

class Contact {
 private:
  int index_;
  std::string first_name_, last_name_, nickname_, phone_number_,
      darkest_secret_;

  void PrintField(std::string field);

 public:
  Contact(void);

  Contact(int index, std::string first_name, std::string last_name,
          std::string phone_number, std::string nickname,
          std::string darkest_secret);

  int GetIndex();
  std::string GetFirstName();
  std::string GetLastName();
  std::string GetNickname();
  std::string GetPhoneNumber();
  std::string GetDarkestSecret();

  void SetIndex(int index);
  void SetFirstName(std::string first_name);
  void SetLastName(std::string last_name);
  void SetNickname(std::string nickname);
  void SetPhoneNumber(std::string phone_number);
  void SetDarkestSecret(std::string darkest_secret);

  void PrintContact();
};

#endif  // CONTACT_HPP_
