/**
 * @file DiamondTrap.hpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-12
 * @brief
 */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
 private:
  std::string name_;

 public:
  DiamondTrap(void);
  DiamondTrap(const DiamondTrap& src);
  DiamondTrap(std::string name);

  DiamondTrap& operator=(const DiamondTrap& rhs);

  void whoAmI(void);

  ~DiamondTrap(void);
};

#endif  // DIAMONDTRAP_HPP
