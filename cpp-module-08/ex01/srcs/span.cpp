/**
 * @file span.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-08-10
 * @brief implement span
 */

#include "Span.hpp"

Span::Span(void) : N_(0) {}

Span::Span(const Span& src) : N_(src.N_), span_(src.span_) {}

Span::Span(const unsigned int N) : N_(N) {}

Span& Span::operator=(const Span& rhs) {
  N_ = rhs.N_;
  span_.clear();
  span_ = rhs.span_;
}
