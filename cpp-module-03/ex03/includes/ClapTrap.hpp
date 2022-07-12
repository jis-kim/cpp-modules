/**
 * @file ClapTrap.hpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-07
 * @brief ClapTrap is NPC of borderlands.
 */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#define L_CYAN "\033[1;96m"
#define L_RED "\033[1;31m"
#define L_YELLOW "\033[1;33m"
#define L_PURPLE "\033[1;35m"
#define L_GREEN "\033[1;32m"
#define L_BLUE "\033[1;94m"
#define RESET "\033[0m"

#include <string>

class ClapTrap {
 protected:
  std::string name_;
  unsigned int hitPoints_;
  unsigned int energyPoints_;
  unsigned int attackDamage_;

 public:
  ClapTrap(void);
  ClapTrap(const ClapTrap& src);
  ClapTrap(std::string name);

  ClapTrap& operator=(const ClapTrap& rhs);

  void attack(const std::string& target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);

  void setName(const std::string name);
  void setHitPoints(unsigned int hitPoints);
  void setEnergyPoints(unsigned int energyPoints);
  void setAttackDamage(unsigned int attackDamage);

  std::string getName(void) const;
  unsigned int getHitPoints(void) const;
  unsigned int getEnergyPoints(void) const;
  unsigned int getAttackDamage(void) const;

  bool isActionable(void) const;

  ~ClapTrap(void);
};

#endif  // CLAPTRAP_HPP
