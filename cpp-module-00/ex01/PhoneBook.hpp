/**
 * @file PhoneBook.hpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-06-17
 * @brief
 */

#ifndef PHONEBOOK_HPP_
#define PHONEBOOK_HPP_
#include "Contact.hpp"

class PhoneBook {
 private:
  Contact *contacts_;
  int size_;

 public:
  PhoneBook(void);
  void AddContact(Contact contact);
  void SearchContact(int index);
  void PrintPhoneBook();
};

#endif  // PHONEBOOK_HPP_
