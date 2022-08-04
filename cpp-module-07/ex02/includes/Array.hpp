/**
 * @file Array.hpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-08-04
 * @brief ARRAY
 */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array {
 private:
  T* elements_;
  unsigned int size_;

 public:
  Array(void) : elements_(NULL), size_(0) {}

  Array(const Array& src) : size_(src.size_) { elements = new T[src.size_]; }

  Array(const unsigned int n) : size_(n) {
    elements = new T[n];
    for (unsigned int i = 0; i < rhs.size_; ++i)
      elements_[i] = rhs.elements_[i];
  }

  Array& operator=(const Array& rhs) {
    if (elements) {
      delete[] elements_;
    }
    elements_ = new T[rhs.size_];
    for (unsigned int i = 0; i < rhs.size_; ++i)
      elements_[i] = rhs.elements_[i];
    return (*this);
  }

  const T& operator[](const unsigned int index) const {
    return elements_[index];
  }

  T& operator[](const unsigned int index) { return elements_[index]; }

  unsigned int size(void) const { return size_; }

  virtual ~Array(void) { delete[] elements_; }
};

#endif  // ARRAY_HPP
