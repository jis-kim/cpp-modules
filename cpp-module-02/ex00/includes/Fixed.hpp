/**
 * @file Fixed.hpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-03
 * @brief Let's study about Fixed point number!
 */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
 private:
  int value_;
  static const int fBits_ = 8;

 public:
  Fixed(void);
  Fixed(const Fixed& src);
  Fixed& operator=(const Fixed& rhs);
  int getRawBits(void) const;
  void setRawBits(int bits);
  ~Fixed(void);
};
#endif  // FIXED_HPP
