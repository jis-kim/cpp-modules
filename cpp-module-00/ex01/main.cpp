/**
 * @file main.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-06-17
 * @brief
 */

#include "Contact.hpp"

int main(void) {
  Contact contact(1, "hi", "my", "hello", "010-1234-5678", "bye");
  contact.PrintContact();
}
