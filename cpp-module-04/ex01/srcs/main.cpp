/**
 * @file main.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-14
 * @brief test code of animals - ex01
 */

#include <iostream>

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int main() {
  std::cout << "\n================= Normal Case ==================\n\n";
  const Animal* meta = new Animal();
  const Animal* j = new Dog();
  const Animal* i = new Cat();

  std::cout << '\n';

  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;
  std::cout << '\n';
  i->makeSound();  // will output the cat sound!
  j->makeSound();
  meta->makeSound();

  std::cout << "\n================= Wrong Case ==================\n\n";

  const WrongAnimal* wa = new WrongAnimal();
  const WrongAnimal* wd = new WrongDog();
  const WrongAnimal* wc = new WrongCat();

  std::cout << '\n';

  std::cout << wd->getType() << " \n";
  std::cout << wc->getType() << " \n";

  std::cout << '\n';

  wa->makeSound();
  wd->makeSound();
  wc->makeSound();

  std::cout << '\n';

  delete meta;
  delete j;
  delete i;

  std::cout << '\n';

  delete wa;
  delete wd;
  delete wc;

  return 0;
}
