/**
 * @file whatever.hpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-08-03
 * @brief whatever you want~
 */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void swap(T& a, T& b) {
  T tmp = a;
  a = b;
  b = tmp;
}

template <typename T>
const T& min(const T& a, const T& b) {
  return a < b ? a : b;
}

template <typename T>
const T& max(const T& a, const T& b) {
  return a > b ? a : b;
}

#endif  // WHATEVER_HPP
