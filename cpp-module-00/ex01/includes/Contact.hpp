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

  void printField(std::string field);

 public:
  Contact(void);

  Contact(int index, std::string first_name, std::string last_name,
          std::string phone_number, std::string nickname,
          std::string darkest_secret);

  int getIndex();
  std::string getFirstName();
  std::string getLastName();
  std::string getNickname();
  std::string getPhoneNumber();
  std::string getDarkestSecret();

  void setIndex(int index);
  void setFirstName(std::string first_name);
  void setLastName(std::string last_name);
  void setNickname(std::string nickname);
  void setPhoneNumber(std::string phone_number);
  void setDarkestSecret(std::string darkest_secret);

  void printContact();
  void printSpecificContact(void);
};

#endif  // CONTACT_HPP_
