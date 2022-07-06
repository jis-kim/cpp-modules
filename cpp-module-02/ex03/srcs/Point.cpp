/**
 * @file Point.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-05
 * @brief
 */

#include "Point.hpp"

Point::Point(void) : x_(0), y_(0) {}

Point::Point(const Fixed x, const Fixed y) : x_(x), y_(y) {}

Point::Point(const Point& src) : x_(src.getX()), y_(src.getY()) {}

Point& Point::operator=(const Point& rhs) {
  (void)rhs;
  return (*this);
}

Point Point::operator-(const Point& rhs) const {
  return (Point(x_ - rhs.getX(), y_ - rhs.getY()));
}

const Fixed Point::getX(void) const { return (x_); }
const Fixed Point::getY(void) const { return (y_); }

Point::~Point(void) {}

std::ostream& operator<<(std::ostream& out, const Point& src) {
  return out << "(" << src.getX() << ", " << src.getY() << ")";
}
