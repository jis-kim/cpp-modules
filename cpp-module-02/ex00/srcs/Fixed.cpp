/**
 * @file Fixed.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-03
 * @brief Let's study about Fixed point number!
 */

#include "Fixed.hpp"

#include <iostream>

Fixed::Fixed(void) : value_(0) { std::cout << "this is default constructor\n"; }

Fixed::Fixed(const Fixed& src) : value_(src.value_) {
  std::cout << "this is copy constructor\n";
}

void Fixed::operator=(const Fixed& src) {
  std::cout << "this is assign operator\n";
  this->value_ = src.value_;
  return;
}

int Fixed::getRawBits(void) const {
  std::cout << "this is getRawBits\n";
  return value_;
}

void Fixed::setRawBits(int bits) {
  std::cout << "this is setRawBits\n";
  value_ = bits;
}

Fixed::~Fixed(void) { std::cout << "this is destructor\n"; }
