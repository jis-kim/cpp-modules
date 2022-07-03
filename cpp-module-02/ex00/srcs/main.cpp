/**
 * @file main.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-03
 * @brief wow
 */

#include <iostream>

#include "Fixed.hpp"

int main(void) {
  Fixed a;
  Fixed b(a);
  Fixed c;
  c = b;
  std::cout << a.getRawBits() << std::endl;
  std::cout << b.getRawBits() << std::endl;
  std::cout << c.getRawBits() << std::endl;
  return 0;
}
