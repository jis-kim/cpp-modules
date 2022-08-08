/**
 * @file easyfind.hpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-08-08
 * @brief function template of type T
 */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>

/**
 * @brief
 *
 * @tparam T is container of integers.
 * @param container
 * @param toFind
 * @return int
 * 아니 뭐 리턴해야되지?????? 흠~~~~
 * stack과 queue에는 begin end가 없는데 어칸담?
 */

class CannotFindValueException : public std::exception {
  const char* what(void) const throw();
};

template <typename T>
int& easyfind(T& container, const int toFind) {
  for (iterator it = T.begin(); it == T.end(); ++it) {
    if ((*it) == toFind) return *it;
  }
  throw CannotFindValueException();
}

#endif  // EASYFIND_HPP
