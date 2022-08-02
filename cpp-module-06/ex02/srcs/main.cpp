/**
 * @file main.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-08-02
 * @brief
 */

#include <cmath>
#include <ctime>
#include <iostream>

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void) {
  int randValue = rand() % 3;
  switch (randValue) {
    case 0:
      return new A();
    case 1:
      return new B();
    default:
      return new C();
  }
}

void identify(Base *p) {
  if (dynamic_cast<A *>(p)) {
    std::cout << "A\n";
    return;
  }
  if (dynamic_cast<B *>(p)) {
    std::cout << "B\n";
    return;
  }
  if (dynamic_cast<C *>(p)) {
    std::cout << "C\n";
    return;
  }
  std::cout << "What are you doing now? Stop it\n";
}

void identify(Base &o) {
  try {
    (void)dynamic_cast<A &>(o);
    std::cout << "A\n";
    return;
  } catch (std::exception &e) {
  }
  try {
    (void)dynamic_cast<B &>(o);
    std::cout << "B\n";
    return;
  } catch (std::exception &e) {
  }
  try {
    (void)dynamic_cast<C &>(o);
    std::cout << "C\n";
    return;
  } catch (std::exception &e) {
    std::cout << "What are you doing now? Stop it\n";
  }
}

int main(void) {
  srand(time(NULL));
  Base *random = generate();
  identify(random);
  identify(*random);

  delete random;
}
