/**
 * @file AMateria.hpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-19
 * @brief Abstract Materia class
 */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>

class ICharacter;

class AMateria {
 protected:
  std::string type;

 public:
  AMateria(void);
  AMateria(const AMateria& src);
  AMateria(std::string const& type);

  AMateria& operator=(const AMateria& rhs);

  std::string const& getType(void) const;  // Returns the materia type
  virtual AMateria* clone(void) const = 0;
  virtual void use(ICharacter& target);

  virtual ~AMateria(void);
};

#endif  // AMATERIA_HPP
