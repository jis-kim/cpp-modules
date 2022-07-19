/**
 * @file Ice.hpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-19
 * @brief  concrete class of Materia
 */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
 public:
  Ice(void);
  Ice(const Ice& src);

  Ice& operator=(const Ice&);

  virtual Ice* clone(void) const;
  virtual void use(ICharacter& target);

  virtual ~Ice(void);
};

#endif  // ICE_HPP
