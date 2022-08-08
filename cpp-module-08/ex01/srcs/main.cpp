/**
 * @file main.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-08-04
 * @brief test function template
 */

#include <iostream>

#include "iter.hpp"

template <typename T>
void print(const T a) {
  std::cout << a << '\n';
}

int main(void) {
  int array[8] = {1, 2, 3, 4, 5, 6, 7, 8};
  iter(array, 8, &print);

  return 0;
}
