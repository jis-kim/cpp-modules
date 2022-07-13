/**
 * @file DiamondTrap.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-12
 * @brief
 */

#include "DiamondTrap.hpp"

#include <iostream>

DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FragTrap() {
  DiamondTrap::name_ = "";
  hitPoints_ = 100;
  energyPoints_ = 50;
  attackDamage_ = 30;
  std::cout << L_BLUE << "DiamondTrap " << RESET
            << "Default Constructor called\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap& src)
    : ClapTrap(src), ScavTrap(src), FragTrap(src) {
  DiamondTrap::name_ = src.DiamondTrap::name_;
  hitPoints_ = 100;
  energyPoints_ = 50;
  attackDamage_ = 30;
  std::cout << L_BLUE << "DiamondTrap " << RESET << "Copy Constructor called\n";
}

DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name + "_clap_trap"), ScavTrap(name), FragTrap(name) {
  DiamondTrap::name_ = name;
  hitPoints_ = 100;
  energyPoints_ = 50;
  attackDamage_ = 30;
  std::cout << L_BLUE << "DiamondTrap " << RESET
            << "Constructor by name called\n";
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& rhs) {
  ClapTrap::name_ = rhs.getName();
  DiamondTrap::name_ = rhs.DiamondTrap::name_;
  hitPoints_ = rhs.getHitPoints();
  energyPoints_ = rhs.getEnergyPoints();
  attackDamage_ = rhs.getAttackDamage();
  std::cout << L_BLUE << "DiamondTrap " << RESET
            << "Assignment operator called\n";
  return (*this);
}

void DiamondTrap::whoAmI() {
  std::cout << "my ClapTrap name is " << ClapTrap::name_
            << "\nand My DimondTrap name is " << DiamondTrap::name_ << "\n";
}

DiamondTrap::~DiamondTrap(void) {
  std::cout << L_BLUE << "DiamondTrap " << RESET
            << "ClapTrap name : " << ClapTrap::name_
            << ", DiamondTrap name : " << DiamondTrap::name_
            << " Destrctor called\n";
}
