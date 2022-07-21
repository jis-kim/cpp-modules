/**
 * @file main.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-19
 * @brief test code for materia template
 */

#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main() {
  IMateriaSource* src = new MateriaSource();
  src->learnMateria(new Ice());
  src->learnMateria(new Cure());

  ICharacter* me = new Character("me");

  me->unequip(2);

  AMateria* ice;
  ice = src->createMateria("ice");
  me->equip(ice);
  AMateria* cure;
  cure = src->createMateria("cure");
  me->equip(cure);

  ICharacter* bob = new Character("bob");

  me->use(0, *bob);
  me->use(1, *bob);
  me->use(2, *bob);
  me->use(3, *bob);

  me->unequip(0);
  me->unequip(1);
  me->unequip(2);
  me->unequip(0);
  me->unequip(3);

  delete bob;

  delete cure;
  delete ice;

  delete me;
  delete src;

  system("leaks myKeyboardIsCute");

  return 0;
}
