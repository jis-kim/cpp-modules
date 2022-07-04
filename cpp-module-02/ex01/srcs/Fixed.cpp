/**
 * @file Fixed.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-03
 * @brief Let's study about Fixed point number!
 */

#include "Fixed.hpp"

#include <cmath>

Fixed::Fixed(void) : value_(0) { std::cout << "Default constructor called\n"; }

Fixed::Fixed(const Fixed& src) {
  std::cout << "Copy constructor called\n";
  this->value_ = src.getRawBits();
}

Fixed::Fixed(const int num) : value_(num << fBits_) {}

Fixed::Fixed(const float num) : value_((int)roundf(num * (1 << fBits_))) {}

Fixed& Fixed::operator=(const Fixed& src) {
  std::cout << "Copy assignment operator called\n";
  this->value_ = src.getRawBits();
  return (*this);
}

float Fixed::toFloat(void) const { return (value_); }

int Fixed::toInt(void) const { return (value_ >> fBits_); }

int Fixed::getRawBits(void) const {
  std::cout << "getRawBits member function called\n";
  return value_;
}

void Fixed::setRawBits(int bits) {
  std::cout << "setRawBits member function called\n";
  value_ = bits;
}

Fixed::~Fixed(void) { std::cout << "Destructor called\n"; }
