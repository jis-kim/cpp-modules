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
  Fixed(const Fixed& src);
  Fixed(const int num);
  Fixed(const float num);

  Fixed& operator=(const Fixed& src);

  float toFloat(void) const;
  int toInt(void) const;

  int getRawBits(void) const;
  void setRawBits(int bits);

  ~Fixed(void);
};

std::ostream& operator<<(std::ostream& os, const Fixed& src);

#endif  // FIXED_HPP
