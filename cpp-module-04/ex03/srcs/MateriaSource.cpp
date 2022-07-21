/**
 * @file MateriaSource.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-21
 * @brief wow
 */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
  memset(inventory_, 0, sizeof(AMateria*) * 4);
}

MateriaSource::MateriaSource(const MateriaSource& src) {
  memset(inventory_, 0, sizeof(AMateria*) * 4);
  (void)src;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& rhs) {
  (void)rhs;
  return (*this);
}

/**
 * @brief Copies the Materia passed as a parameter and store it in memory so it
can be cloned later. Like the Character, the MateriaSource can know at most 4
Materias. They are not necessarily unique.
 *
 */
void MateriaSource::learnMateria(AMateria* m) {
  for (int i = 0; i < 4; ++i) {
    if (!inventory_[i]) {
      inventory_[i] = m;
      break;
    }
  }
}

/**
 * @brief Returns a new Materia. The latter is a copy of the Materia previously
learned by the MateriaSource whose type equals the one passed as parameter.
Returns 0 if the type is unknown.
 *
 * @param type
 * @return AMateria*
 */
AMateria* MateriaSource::createMateria(std::string const& type) {
  for (int i = 0; i < 4; ++i) {
    if (inventory_[i]->getType() == type) {
      return (inventory_[i]->clone());
    }
  }
  return (0);
}

MateriaSource::~MateriaSource(void) {
  for (int i = 3; i >= 0; --i) delete inventory_[i];
}
