/**
 * @file PhoneBook.hpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-06-17
 * @brief
 */

#ifndef PHONEBOOK_HPP_
#define PHONEBOOK_HPP_
#include <sstream>
#include <string>

#include "Contact.hpp"

class PhoneBook {
 private:
  Contact contacts_[8];
  unsigned int size_;
  unsigned int oldest_;

 public:
  PhoneBook(void);
  unsigned int getSize(void);
  unsigned int getOldest(void);
  void addContact(Contact& contact);
  void searchContact(unsigned int index);
  void printPhoneBook();
};

#endif  // PHONEBOOK_HPP_
