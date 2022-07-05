/**
 * @file Fixed.hpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-03
 * @brief Let's study about Fixed point number!
 */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
 private:
  int value_;
  static const int fBits_ = 8;

 public:
  Fixed(void);
  Fixed(const Fixed&);
  Fixed(const int num);
  Fixed(const float num);

  Fixed& operator=(const Fixed&);

  float toFloat(void) const;
  int toInt(void) const;

  int getRawBits(void) const;
  void setRawBits(int bits);

  // arithmetic operator
  Fixed operator+(const Fixed& rhs) const;  // right hand side
  Fixed operator-(const Fixed& rhs) const;
  Fixed operator*(const Fixed& rhs) const;
  Fixed operator/(const Fixed& rhs) const;

  // comparison operator
  bool operator>(const Fixed& rhs) const;
  bool operator<(const Fixed& rhs) const;
  bool operator>=(const Fixed& rhs) const;
  bool operator<=(const Fixed& rhs) const;
  bool operator==(const Fixed& rhs) const;
  bool operator!=(const Fixed& rhs) const;

  // increment, decrement operator
  Fixed& operator++(void);  // pre
  Fixed operator++(int);    // post
  Fixed& operator--(void);  // pre
  Fixed operator--(int);    // post

  // static function
  static Fixed& min(Fixed& lhs, Fixed& rhs);
  static const Fixed& min(const Fixed& lhs, const Fixed& rhs);
  static Fixed& max(Fixed& lhs, Fixed& rhs);
  static const Fixed& max(const Fixed& lhs, const Fixed& rhs);

  ~Fixed(void);
};

std::ostream& operator<<(std::ostream& os, const Fixed&);

#endif  // FIXED_HPP
