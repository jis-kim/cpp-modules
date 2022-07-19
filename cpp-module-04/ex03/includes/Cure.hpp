/**
 * @file Cure.hpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-19
 * @brief concrete class of Materia
 */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
 public:
  Cure(void);
  Cure(const Cure& src);
  Cure(std::string const& type);

  Cure& operator=(const Cure& rhs);

  Cure* clone(void) const;
  void use(ICharacter& targer);

  virtual ~Cure(void);
};

#endif  // CURE_HPP
