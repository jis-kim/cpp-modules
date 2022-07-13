/**
 * @file ClapTrap.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-07
 * @brief 01 claptrap - npc of borderlands
 */

#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap(void)
    : name_(""), hitPoints_(10), energyPoints_(10), attackDamage_(0) {
  std::cout << L_PURPLE << "ClapTrap " << RESET
            << "Default Constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap& src)
    : name_(src.getName()),
      hitPoints_(src.getHitPoints()),
      energyPoints_(src.getEnergyPoints()),
      attackDamage_(src.getAttackDamage()) {
  std::cout << L_PURPLE << "ClapTrap " << RESET << "Copy Constructor called\n";
}

ClapTrap::ClapTrap(std::string name)
    : name_(name), hitPoints_(10), energyPoints_(10), attackDamage_(0) {
  std::cout << L_PURPLE << "ClapTrap " << RESET
            << "Constructor by name called\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs) {
  name_ = rhs.getName();
  hitPoints_ = rhs.getHitPoints();
  energyPoints_ = rhs.getEnergyPoints();
  attackDamage_ = rhs.getAttackDamage();

  std::cout << L_PURPLE << "ClapTrap " << RESET
            << "Assignment operator called\n";
  return (*this);
}

void ClapTrap::attack(const std::string& target) {
  std::cout << L_YELLOW << name_ << RESET << " attacks " << L_YELLOW << target
            << RESET << " ," << L_RED << " causing " << L_RED << attackDamage_
            << RESET << " points of damage!\n"
            << RESET;
}
void ClapTrap::takeDamage(unsigned int amount) {
  if (amount <= hitPoints_)
    hitPoints_ -= amount;
  else {
    amount = hitPoints_;
    hitPoints_ = 0;
  }
  std::cout << L_YELLOW << name_ << L_RED << " takes " << amount << RESET
            << " points of damage!\n"
            << name_ << " : hitPoints : " << hitPoints_ << '\n';
}
void ClapTrap::beRepaired(unsigned int amount) {
  --energyPoints_;
  hitPoints_ += amount;
  std::cout << L_YELLOW << name_ << L_CYAN " is repaired " << amount << RESET
            << " points of damage!\n"
            << name_ << " : hitPoints : " << hitPoints_ << '\n';
  ;
}

void ClapTrap::setName(const std::string name) { name_ = name; }
void ClapTrap::setHitPoints(unsigned int hitPoints) { hitPoints_ = hitPoints; }
void ClapTrap::setEnergyPoints(unsigned int energyPoints) {
  energyPoints_ = energyPoints;
}
void ClapTrap::setAttackDamage(unsigned int attackDamage) {
  attackDamage_ = attackDamage;
}

std::string ClapTrap::getName(void) const { return name_; }
unsigned int ClapTrap::getHitPoints(void) const { return hitPoints_; }
unsigned int ClapTrap::getEnergyPoints(void) const { return energyPoints_; }
unsigned int ClapTrap::getAttackDamage(void) const { return attackDamage_; }

bool ClapTrap::isActionable(void) const {
  return (energyPoints_ && hitPoints_);
}

ClapTrap::~ClapTrap(void) {
  std::cout << L_PURPLE << "ClapTrap " << RESET << name_
            << " Destrctor called\n";
}
