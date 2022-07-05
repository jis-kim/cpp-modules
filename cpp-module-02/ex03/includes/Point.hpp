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
  Fixed x_;
  Fixed y_;

 public:
  Point(void);
  Point(const Point& x, const Point& y);
  Point(const Point& src);
};

#endif
