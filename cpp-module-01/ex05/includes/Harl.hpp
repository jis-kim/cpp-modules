/**
 * @file Harl.hpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-01
 * @brief DEBUG, INFO, WARNING, ERROR
 */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl {
 private:
  void (Harl::*ptr_)(void);

  void debug(void);
  void info(void);
  void warning(void);
  void error(void);

 public:
  Harl(void);
  void complain(std::string level);
};

#endif
