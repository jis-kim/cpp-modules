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
  static bool flag = true;

  if (flag) {
    srand(time(NULL));
    flag = false;
  }
  int randValue = rand() % 3;
  switch (randValue) {
    case 0:
      return new A();
    case 1:
      return new B();
  }
}

void identify(Base *p) {}

void identiry(Base &o) {}

int main(void) {}
