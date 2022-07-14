/**
 * @file Cat.hpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-14
 * @brief What does the cat say? - ex00
 */

#ifndef CAT_HPP

#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
 public:
  Cat(void);
  Cat(Cat& src);
  Cat(std::string name);

  Cat& operator=(const Cat& rhs);

  void makeSound(void);

  ~Cat(void);
};

#endif  // CAT_HPP
