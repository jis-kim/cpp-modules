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
  // 리턴값 알알아아서 하하셈셈
  void operator=(const Fixed& src);
  int getRawBits(void) const;
  void setRawBits(int bits);
  ~Fixed(void);
};
#endif  // FIXED_HPP
