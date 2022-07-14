/**
 * @file Dog.hpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-14
 * @brief What does the dog say? - ex00
 */
#ifndef DOG_HPP

#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
 public:
  Dog(void);
  Dog(Dog& src);
  Dog(std::string name);

  Dog& operator=(const Dog& rhs);

  void makeSound(void);
  ~Dog(void);
};

#endif  // DOG_HPP
