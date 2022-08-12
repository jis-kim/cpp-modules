/**
 * @file Span.hpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-08-10
 * @brief store numbers
 */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span {
 private:
  unsigned int N_;
  std::vector<int> numbers_;

 public:
  Span(void);
  Span(const Span& src);
  Span(const unsigned int N);

  Span& operator=(const Span& rhs);

  void addNumber(const int number);
  int shortestSpan(void) const;
  int longestSpan(void) const;
  void addNumberSequence(std::vector<int>::iterator pos,
                         std::vector<int>::iterator begin,
                         std::vector<int>::iterator end);
  size_t size(void) const;
  void print(void) const;

  virtual ~Span(void);
};

#endif  // SPAN_HPP
