/**
 * @file Point.hpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-05
 * @brief represent points.
 */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
 private:
  const Fixed x_;
  const Fixed y_;

 public:
  Point(void);
  Point(const Fixed& x, const Fixed& y);
  Point(const Point& src);

  Point& operator=(const Point& rhs);

  void setX(const Fixed& x);
  const Fixed getX(void) const;
  void setY(const Fixed& x);
  const Fixed getY(void) const;

  ~Point(void);
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
