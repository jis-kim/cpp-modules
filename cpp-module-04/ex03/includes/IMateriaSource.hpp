/**
 * @file IMeteriaSource.hpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-19
 * @brief Interface of MateriaSource
 */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

class AMateria;
#include <string>

class IMateriaSource {
 public:
  virtual ~IMateriaSource() {}
  virtual void learnMateria(AMateria*) = 0;
  virtual AMateria* createMateria(std::string const& type) = 0;
};

#endif  // IMATERIASOURCE_HPP
