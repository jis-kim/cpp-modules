/**
 * @file Point.hpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-05
 * @brief represent points.
 */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

#define L_CYAN "\033[1;96m"
#define L_RED "\033[1;31m"
#define L_YELLOW "\033[1;33m"
#define RESET "\033[0m"

class Point {
 private:
  const Fixed x_;
  const Fixed y_;

 public:
  Point(void);
  Point(const Fixed x, const Fixed y);
  Point(const Point& src);

  Point& operator=(const Point& rhs);
  Point operator-(const Point& rhs) const;

  const Fixed getX(void) const;
  const Fixed getY(void) const;

  ~Point(void);
};

std::ostream& operator<<(std::ostream& out, const Point& rhs);
bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif  // POINT_HPP
