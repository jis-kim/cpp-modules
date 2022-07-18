/**
 * @file Cat.hpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-14
 * @brief What does the cat say? - ex02
 */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
 private:
  Brain* brain_;

 public:
  Cat(void);
  Cat(const Cat& src);

  Cat& operator=(const Cat& rhs);

  void makeSound(void) const;
  Brain* getBrain(void) const;
  ~Cat(void);
};

#endif  // CAT_HPP
