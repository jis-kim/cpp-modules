/**
 * @file Span.hpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-08-10
 * @brief store numbers
 */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>

/**
 * @brief 일단 vector로 대충 그려봤는데 이거 아닐 거 같음
 * 아니지 맘대로 STL쓰라며? 그럼 써도 되는 거 아닐까?
 */
class Span {
 private:
  unsigned int N_;
  std::vector<int> span_;

 public:
  Span(void);
  Span(const Span& src);
  Span(const unsigned int N);

  Span& operator=(const Span& rhs);

  void addNumber(const int number);
  int shortestSpan(void) const;
  int longestSpan(void) const;
  void addNumberSequence(interator pos, std::vector<int>::iterator begin,
                         std::vector<int>::iterator end);

  virtual ~Span(void);
}

#endif  // SPAN_HPP
