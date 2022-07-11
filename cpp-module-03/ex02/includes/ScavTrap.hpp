/**
 * @file ScavTrap.hpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-08
 * @brief inherits from ClapTrap
 */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
 public:
  ScavTrap(void);
  ScavTrap(const ScavTrap& src);
  ScavTrap(std::string name);

  ScavTrap& operator=(const ScavTrap& rhs);

  void guardGate(void);

  ~ScavTrap(void);
};

#endif  // SCAVTRAP_HPP
