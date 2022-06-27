/**
 * @file main.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-06-25
 * @brief Diffrence between pointer and reference.
 */

#include <iostream>
#include <string>

int main(void) {
  std::string str("HI THIS IS BRAIN");
  std::string *stringPTR = &str;
  std::string &stringREF = str;

  // print address
  std::cout << "Address of variables\n";
  std::cout << "string variable: " << &str << '\n';
  std::cout << "string pointer: " << stringPTR << '\n';
  std::cout << "string reference: " << &stringREF << '\n';

  std::cout << "\nValue of variables\n";
  std::cout << "string variable: " << str << '\n';
  std::cout << "string pointer: " << *stringPTR << '\n';
  std::cout << "string reference: " << stringREF << '\n';
  return 0;
}
