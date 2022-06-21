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

int PhoneBook::AddContact(Contact &contact) {
  if (this->size_ == 8) {
    if (oldest_ == 7) oldest_ = 0;
    this->contacts_[oldest_++] = contact;
  } else {
    this->contacts_[this->size_] = contact;
    this->size_++;
  }
  return size_;
}

void PhoneBook::SearchContact(unsigned int index) {
  if (index < 0 || index >= this->size_) {
    std::cout << "Invalid index\n";
  } else {
    this->contacts_[index].PrintSpecificContact();
  }
}

void PhoneBook::PrintPhoneBook() {
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
    this->contacts_[i].PrintContact();
    std::cout << "---------------------------------------------\n";
  }
}

unsigned int PhoneBook::GetSize(void) { return this->size_; }
