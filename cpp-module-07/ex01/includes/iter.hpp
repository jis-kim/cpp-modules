/**
 * @file iter.hpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-08-04
 * @brief iter is function template
 */

#ifndef ITER_HPP
#define ITER_HPP

template <typename T>
void iter(T *address, size_t length, void (*func)(const T &)) {
  for (size_t i = 0; i < length; ++i) {
    func(address[i]);
  }
}

#endif  // ITER_HPP
