/**
 * @file main.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-08-11
 * @brief
 */

#include "Span.hpp"

int main(void) {
  try {
    Span s;
    s.addNumber(3);
    std::cout << "3 is added\n";
    s.addNumber(1);
    std::cout << "1 is added\n";

  } catch (const std::exception& e) {
    std::cout << e.what() << '\n';
  }

  try {
    Span s(10);
    s.addNumber(3);
    s.addNumber(1);
    srand(time(NULL));
    for (int i = 0; i < 10; ++i) {
      s.addNumber(rand() % 10);
    }
    for (int i = 0; i < 10; ++i) {
    }
  } catch (const std::exception& e) {
    std::cout << e.what() << '\n';
  }

  return 0;
}
