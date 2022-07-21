/**
 * @file MateriaSource.hpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-19
 * @brief implement IMatriaSource
 */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
 private:
  AMateria* inventory_[4];

 public:
  MateriaSource(void);
  MateriaSource(const MateriaSource& src);

  MateriaSource& operator=(const MateriaSource& rhs);

  void learnMateria(AMateria* m);
  AMateria* createMateria(std::string const& type);

  ~MateriaSource(void);
};

#endif  // MATERIASOURCE_HPP
