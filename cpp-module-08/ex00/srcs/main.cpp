/**
 * @file main.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-08-03
 * @brief
 */

#include <deque>
#include <iostream>
#include <list>
#include <vector>

#include "easyfind.hpp"

int main(void) {
  try {
    std::vector<int> v;
    v.push_back(19);
    v.push_back(20);
    v.push_back(23);
    v.push_back(40);

    std::vector<int>::iterator fIter = easyfind(v, 23);
    std::cout << *fIter << '\n';

    fIter = easyfind(v, 20);
    std::cout << *fIter << '\n';

    fIter = easyfind(v, 19);
    std::cout << *(++fIter) << '\n';

    fIter = easyfind(v, 1);
    std::cout << *fIter << '\n';
  } catch (const std::exception& e) {
    std::cout << e.what() << '\n';
  }

  try {
    std::deque<int> d;
    d.push_back(19);
    d.push_back(20);
    d.push_back(23);
    d.push_back(40);

    std::deque<int>::iterator fIter = easyfind(d, 23);
    std::cout << *fIter << '\n';

    fIter = easyfind(d, 20);
    std::cout << *fIter << '\n';

    d.erase(fIter);
    fIter = easyfind(d, 20);
    std::cout << *fIter << '\n';
  } catch (const std::exception& e) {
    std::cout << e.what() << '\n';
  }

  try {
    std::list<int> l;
    l.push_back(19);
    l.push_back(20);
    l.push_back(23);
    l.push_back(40);

    std::list<int>::iterator fIter = easyfind(l, 40);
    std::cout << *fIter << '\n';

    std::cout << *(--fIter) << '\n';

    fIter = easyfind(l, 20);
    std::cout << *fIter << '\n';
    fIter = easyfind(l, 19);
    std::cout << *fIter << '\n';

    std::cout << '[';
    for (; !l.empty(); l.pop_front()) std::cout << l.front() << ", ";
    std::cout << "]\n";

    fIter = easyfind(l, 40);

  } catch (const std::exception& e) {
    std::cout << e.what() << '\n';
  }
  return 0;
}
