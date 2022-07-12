/**
 * @file FragTrap.hpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-11
 * @brief
 */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
 public:
  FragTrap(void);
  FragTrap(const FragTrap& src);
  FragTrap(std::string name);

  FragTrap& operator=(const FragTrap& rhs);

  void highFiveGuys(void);

  ~FragTrap(void);
};

#endif  // FRAGTRAP_HPP
