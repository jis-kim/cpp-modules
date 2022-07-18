/**
 * @file main.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-14
 * @brief test code of animals - ex02
 */

#include <iostream>

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

void test00(void) {
  std::cout << "\n===================== Normal Case ======================\n\n";
  const Animal* j = new Dog();
  const Animal* i = new Cat();

  std::cout << '\n';

  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;
  std::cout << '\n';
  i->makeSound();  // will output the cat sound!
  j->makeSound();

  std::cout << "\n===================== Wrong Case =======================\n\n";

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

  delete j;
  delete i;

  std::cout << '\n';

  delete wa;
  delete wd;
  delete wc;
}

void test01(void) {
  Animal* animals[100];

  int i;
  for (i = 0; i < 50; i++) animals[i] = new Cat();
  for (; i < 100; i++) animals[i] = new Dog();

  for (i = 0; i < 100; i++) {
    delete animals[i];
  }

  std::cout
      << "\n==================== Deep Copy Test =====================\n\n";

  Dog dog;
  Dog copyDog = dog;

  Brain* dogBrain = dog.getBrain();
  Brain* copyDogBrain = copyDog.getBrain();

  std::cout << "\n====================== Dog Brain ========================\n\n"
            << *dogBrain << '\n';
  std::cout
      << "\n==================== Copied Dog Brain =====================\n\n"
      << *copyDogBrain << '\n';

  std::string even("I'm even\n");
  even = L_CYAN + even + RESET;
  for (int i = 0; i < 100; i += 2) {
    copyDogBrain->setIdea(i, even);
  }

  std::cout << "\n====================== Dog Brain ========================\n\n"
            << *dogBrain << '\n';
  std::cout
      << "\n==================== Copied Dog Brain =====================\n\n"
      << *copyDogBrain << '\n';

  Cat cat;
  Cat copyCat = cat;

  Brain* catBrain = cat.getBrain();
  Brain* copyCatBrain = copyCat.getBrain();

  std::cout << "\n====================== Cat Brain ========================\n\n"
            << *catBrain << '\n';
  std::cout
      << "\n==================== Copied Cat Brain =====================\n\n"
      << *copyCatBrain << '\n';

  std::string odd("I'm odd\n");
  even = L_PURPLE + odd + RESET;
  for (int i = 1; i < 100; i += 2) {
    copyCatBrain->setIdea(i, even);
  }

  std::cout << "\n====================== Cat Brain ========================\n\n"
            << *catBrain << '\n';
  std::cout
      << "\n==================== Copied Cat Brain =====================\n\n"
      << *copyCatBrain << '\n';
}

void exitHandler() { system("leaks brain"); }

int main() {
  test00();
  test01();

  // Animal animal;
  // animal.makeSound();

  atexit(exitHandler);
  return 0;
}
