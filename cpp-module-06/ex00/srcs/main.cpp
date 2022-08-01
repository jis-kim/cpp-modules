/**
 * @file main.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-31
 * @brief
 */

#include <cfloat>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <string>

#include "Color.hpp"

void convertChar(const double d) {
  try {
    if (d < 0 || d > 127 || std::isnan(d))
      throw std::invalid_argument("convertChar : no conversion");
    char c = static_cast<char>(d);
    std::cout << "char: ";
    if (isprint(c))
      std::cout << c << '\n';
    else
      std::cout << "Non displayable\n";

  } catch (const std::exception& e) {
    std::cout << "char: impossible\n";
  }
}

void convertInt(const double d) {
  try {
    if (d < INT_MIN || d > INT_MAX || std::isnan(d))
      throw std::invalid_argument("convertInt : no conversion");
    int i = static_cast<int>(d);
    std::cout << "int: " << i << '\n';
  } catch (const std::exception& e) {
    std::cout << "int: impossible\n";
  }
}

void convertFloat(const double d) {
  try {
    if (!std::isinf(d) && (d < -FLT_MAX || d > FLT_MAX))
      throw std::invalid_argument("convertFloat : no conversion");
    float f = static_cast<float>(d);
    std::cout << "float: " << f << "f\n";
  } catch (const std::exception& e) {
    std::cout << "float: impossible\n";
  }
}

void convertDouble(const double d) { std::cout << "double: " << d << '\n'; }

int main(int argc, char** argv) {
  if (argc != 2 || argv[1][0] == '\0') {
    std::cout << L_RED << "Argument Error\n";
    return 1;
  }
  std::cout << std::showpoint << std::fixed;
  std::cout.precision(1);

  double p;
  try {
    if (argv[1][1] == '\0' && !isdigit(argv[1][0]))  // char
      p = static_cast<double>(argv[1][0]);
    else {
      char* end = NULL;
      p = std::strtod(argv[1], &end);
      if ((*end != '\0' && *end != 'f') || errno == ERANGE)
        throw std::invalid_argument("convertFloat: no conversion");
    }
    convertChar(p);
    convertInt(p);
    convertFloat(p);
    convertDouble(p);
  } catch (std::exception& e) {
    std::cout << "char: impossible\n"
              << "int: impossible\n"
              << "float: impossible\n"
              << "double: impossible\n";
  }
}
