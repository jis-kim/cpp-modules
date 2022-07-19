/**
 * @file MateriaSource.hpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-19
 * @brief implement IMatriaSource
 */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
 public:
  MateriaSource(void);
  MateriaSource(const MateriaSource& src);

  MateriaSource& operator=(const MateriaSource& rhs);

  ~MateriaSource(void);
};

#endif  // MATERIASOURCE_HPP
