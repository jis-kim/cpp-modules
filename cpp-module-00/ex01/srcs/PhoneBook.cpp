/**
 * @file PhoneBook.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-06-18
 * @brief
 */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : size_(0), oldest_(0) {
  memset(contacts_, 0, sizeof(contacts_));
}

void PhoneBook::addContact(Contact &contact) {
  if (this->size_ == 8) {
    this->contacts_[oldest_] = contact;
  } else {
    this->contacts_[this->size_] = contact;
    this->size_++;
  }
  oldest_++;
  if (oldest_ == 8) oldest_ = 0;
}

void PhoneBook::searchContact(unsigned int index) {
  if (index < 0 || index >= this->size_) {
    std::cout << "Invalid index\n";
  } else {
    this->contacts_[index].printSpecificContact();
  }
}

void PhoneBook::printPhoneBook() {
  std::cout << "---------------------------------------------\n";
  std::cout << "|";
  std::cout.width(10);
  std::cout << "index" << '|';
  std::cout.width(10);
  std::cout << "first name" << '|';
  std::cout.width(10);
  std::cout << "last name" << '|';
  std::cout.width(10);
  std::cout << "nickname"
            << "|\n";
  std::cout << "---------------------------------------------\n";
  for (unsigned int i = 0; i < this->size_; i++) {
    this->contacts_[i].printContact();
    std::cout << "---------------------------------------------\n";
  }
}

unsigned int PhoneBook::getSize(void) { return size_; }
unsigned int PhoneBook::getOldest(void) { return oldest_; }
