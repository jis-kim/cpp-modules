/**
 * @file WrongDog.hpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-14
 * @brief What does the dog say? - ex00
 */

#ifndef WRONGDOG_HPP

#define WRONGDOG_HPP

#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal {
 public:
  WrongDog(void);
  WrongDog(WrongDog& src);
  WrongDog(std::string name);

  WrongDog& operator=(const WrongDog& rhs);

  void makeSound(void) const;
  ~WrongDog(void);
};

#endif  // WRONGDOG_HPP
