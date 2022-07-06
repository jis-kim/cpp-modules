/**
 * @file bsp.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-05
 * @brief
 */

#include "Point.hpp"

Fixed crossProduct(const Point& p1, const Point& p2) {
  return (p1.getX() * p2.getY() - p1.getY() * p2.getX());
}

/**
 * @brief jule said it's outer product (cross product)
 *
 * a, b, c are vertices
 * @param a
 * @param b
 * @param c
 * @param point just x, y
 * @return true
 * @return false
 */

bool bsp(Point const a, Point const b, Point const c, Point const point) {
  Point v[3] = {b - a, c - b, a - c};
  Point p[3] = {point - a, point - b, point - c};

  Fixed z[3];
  for (int i = 0; i < 3; i++) {
    z[i] = crossProduct(v[i], p[i]);
  }
  return (z[0] > 0 && z[1] > 0 && z[2] > 0) ||
         (z[0] < 0 && z[1] < 0 && z[2] < 0);
}
