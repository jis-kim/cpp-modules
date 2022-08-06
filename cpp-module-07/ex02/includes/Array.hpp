/**
 * @file Array.hpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-08-04
 * @brief ARRAY
 */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>

template <typename T>
class Array {
 private:
  T* elements_;
  unsigned int size_;

 public:
  Array(void) : elements_(NULL), size_(0) {}

  Array(const Array& src) : size_(src.size_) { elements_ = new T[src.size_]; }

  Array(const unsigned int n) : size_(n) { elements_ = new T[n]; }

  Array& operator=(const Array& rhs) {
    if (elements_) {
      delete[] elements_;
    }
    elements_ = new T[rhs.size_];
    for (unsigned int i = 0; i < rhs.size_; ++i)
      elements_[i] = rhs.elements_[i];
    return (*this);
  }

  const T& operator[](const unsigned int index) const {
    if (index >= size_) throw std::out_of_range("index is out of range");
    return elements_[index];
  }

  T& operator[](const unsigned int index) {
    if (index >= size_) throw std::out_of_range("index is out of range");
    return elements_[index];
  }

  unsigned int size(void) const { return size_; }

  virtual ~Array(void) { delete[] elements_; }
};

#endif  // ARRAY_HPP
