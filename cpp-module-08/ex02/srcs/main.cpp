/**
 * @file main.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-08-12
 * @brief test code
 */

#include <iostream>

#include "MutantStack.hpp"

void test(void) {
  MutantStack<int> mstack;

  mstack.push(5);
  mstack.push(17);

  std::cout << mstack.top() << "\n\n";

  mstack.pop();

  std::cout << mstack.size() << "\n\n";

  mstack.push(3);
  mstack.push(5);
  mstack.push(737);
  //[...]
  mstack.push(0);

  MutantStack<int>::iterator it = mstack.begin();
  MutantStack<int>::iterator ite = mstack.end();

  ++it;
  --it;
  while (it != ite) {
    std::cout << *it << std::endl;
    ++it;
  }
  std::cout << '\n';
  std::stack<int> s(mstack);

  MutantStack<char> test;

  for (int i = 0; i < 10; i++) test.push(i + '0');
  for (; !test.empty(); test.pop()) {
    std::cout << test.top() << '\n';
  }
}

int main() {
  test();

  system("leaks mutantStack");
  return 0;
}
