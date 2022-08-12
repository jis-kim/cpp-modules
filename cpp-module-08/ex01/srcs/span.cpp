/**
 * @file span.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-08-10
 * @brief implement span
 */

#include "Span.hpp"

Span::Span(void) : N_(0) {}

Span::Span(const Span& src) : N_(src.N_), numbers_(src.numbers_) {}

Span::Span(const unsigned int N) : N_(N) {}

Span& Span::operator=(const Span& rhs) {
  N_ = rhs.N_;
  numbers_ = rhs.numbers_;
  return (*this);
}

void Span::addNumber(const int number) {
  if (numbers_.size() >= N_) throw std::exception();
  numbers_.push_back(number);
}

int Span::shortestSpan(void) const {
  if (numbers_.size() <= 1) throw std::exception();
  std::vector<int> tmp(numbers_);
  std::sort(tmp.begin(), tmp.end());
  int min = INT_MAX;
  for (std::vector<int>::iterator i = tmp.begin(); (i + 1) != tmp.end(); ++i) {
    if (*(i + 1) - *i < min) min = *(i + 1) - *i;
  }
  return min;
}

int Span::longestSpan(void) const {
  if (numbers_.size() <= 1) throw std::exception();
  return *(std::max_element(numbers_.begin(), numbers_.end())) -
         *(std::min_element(numbers_.begin(), numbers_.end()));
}

void Span::addNumberSequence(std::vector<int>::iterator pos,
                             std::vector<int>::iterator begin,
                             std::vector<int>::iterator end) {
  // FIXME fix exception
  if (numbers_.size() >= N_) throw std::exception();
  numbers_.insert(pos, begin, end);
}

size_t Span::size(void) const { return numbers_.size(); }

void Span::print(void) const {
  std::cout << "[ ";
  for (std::vector<int>::const_iterator it = numbers_.begin();
       it != numbers_.end(); it++) {
    std::cout << *it << ", ";
  }
  std::cout << " ]\n";
}

Span::~Span(void) { numbers_.clear(); }
