/**
 * @file Character.hpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-19
 * @brief implement ICharacter
 */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>

#include "AMateria.hpp"
#include "Color.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter {
 private:
  std::string name_;
  AMateria* inventory_[4];

 public:
  Character(void);
  Character(const std::string name);
  Character(const Character& src);

  Character& operator=(const Character& rhs);

  std::string const& getName(void) const;
  void equip(AMateria* m);
  void unequip(int idx);
  void use(int idx, ICharacter& target);

  unsigned int getFullSlot(void) const;

  virtual ~Character(void);
};

#endif  // CHARACTER_HPP
