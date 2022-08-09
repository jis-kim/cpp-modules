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
 */

template <typename T>
typename T::iterator easyfind(T& container, const int toFind) {
  typename T::iterator it =
      std::find(container.begin(), container.end(), toFind);
  if (it == container.end())
    throw std::logic_error("There is no element to find");
  return it;
}

#endif  // EASYFIND_HPP
