/**
 * @file Fixed.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-03
 * @brief Let's study about Fixed point number!
 */

#include "Fixed.hpp"

#include <cmath>

Fixed::Fixed(void) : value_(0) {}

Fixed::Fixed(const Fixed& rhs) { this->value_ = rhs.getRawBits(); }

Fixed::Fixed(const int num) : value_(num << fBits_) {}

Fixed::Fixed(const float num) : value_((int)roundf(num * (1 << fBits_))) {}

Fixed& Fixed::operator=(const Fixed& rhs) {
  this->value_ = rhs.value_;
  return (*this);
}

float Fixed::toFloat(void) const { return ((float)value_ / (1 << fBits_)); }

int Fixed::toInt(void) const { return (value_ >> fBits_); }

int Fixed::getRawBits(void) const { return value_; }

void Fixed::setRawBits(int bits) { value_ = bits; }

// arithmeticoperator
Fixed Fixed::operator+(const Fixed& rhs) const {
  Fixed temp(this->toFloat() + rhs.toFloat());
  return temp;
}

Fixed Fixed::operator-(const Fixed& rhs) const {
  Fixed temp(this->toFloat() - rhs.toFloat());
  return temp;
}

Fixed Fixed::operator*(const Fixed& rhs) const {
  Fixed temp(this->toFloat() * rhs.toFloat());
  return temp;
}

Fixed Fixed::operator/(const Fixed& rhs) const {
  Fixed temp(this->toFloat() / rhs.toFloat());
  return temp;
}

// comparison perator
bool Fixed::operator>(const Fixed& rhs) const {
  return (value_ > rhs.getRawBits());
}

bool Fixed::operator<(const Fixed& rhs) const {
  return (value_ < rhs.getRawBits());
}

bool Fixed::operator>=(const Fixed& rhs) const {
  return (value_ >= rhs.getRawBits());
}

bool Fixed::operator<=(const Fixed& rhs) const {
  return (value_ <= rhs.getRawBits());
}

bool Fixed::operator==(const Fixed& rhs) const {
  return (value_ == rhs.getRawBits());
}

bool Fixed::operator!=(const Fixed& rhs) const {
  return (value_ != rhs.getRawBits());
}

// increment, decrement perator
/**
 * void -> pre, int -> post
 */

Fixed& Fixed::operator++(void) {
  ++value_;
  return (*this);
}

Fixed Fixed::operator++(int) {
  Fixed temp(*this);
  this->operator++();
  return temp;
}

Fixed& Fixed::operator--(void) {
  --value_;
  return (*this);
}

Fixed Fixed::operator--(int) {
  Fixed temp(*this);
  this->operator--();
  return temp;
}

Fixed& Fixed::min(Fixed& lhs, Fixed& rhs) { return (lhs < rhs) ? lhs : rhs; }

const Fixed& Fixed::min(const Fixed& lhs, const Fixed& rhs) {
  return (lhs < rhs) ? lhs : rhs;
}

Fixed& Fixed::max(Fixed& lhs, Fixed& rhs) { return (lhs > rhs) ? lhs : rhs; }

const Fixed& Fixed::max(const Fixed& lhs, const Fixed& rhs) {
  return (lhs > rhs) ? lhs : rhs;
}
Fixed::~Fixed(void) {}

std::ostream& operator<<(std::ostream& os, const Fixed& rhs) {
  os << rhs.toFloat();
  return os;
}
