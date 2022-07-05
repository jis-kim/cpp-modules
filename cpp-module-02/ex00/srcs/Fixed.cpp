/**
 * @file Fixed.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-03
 * @brief Let's study about Fixed point number!
 */

#include "Fixed.hpp"

#include <iostream>

Fixed::Fixed(void) : value_(0) { std::cout << "Default constructor called\n"; }

Fixed::Fixed(const Fixed& src) {
  std::cout << "Copy constructor called\n";
  this->value_ = src.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& rhs) {
  std::cout << "Copy assignment operator called\n";
  this->value_ = rhs.getRawBits();
  return (*this);
}

int Fixed::getRawBits(void) const {
  std::cout << "getRawBits member function called\n";
  return value_;
}

void Fixed::setRawBits(int bits) {
  std::cout << "setRawBits member function called\n";
  value_ = bits;
}

Fixed::~Fixed(void) { std::cout << "Destructor called\n"; }
