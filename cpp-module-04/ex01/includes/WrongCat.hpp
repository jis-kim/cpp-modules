/**
 * @file WrongCat.hpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-14
 * @brief What does the cat say? - ex01
 */

#ifndef WRONGCAT_HPP

#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
 public:
  WrongCat(void);
  WrongCat(const WrongCat& src);
  WrongCat(std::string name);

  WrongCat& operator=(const WrongCat& rhs);

  void makeSound(void) const;

  ~WrongCat(void);
};

#endif  // WRONGCAT_HPP
