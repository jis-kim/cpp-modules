/**
 * @file WrongAnimal.hpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-15
 * @brief Wrong base - ex02
 */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#define L_CYAN "\033[1;96m"
#define L_RED "\033[1;31m"
#define L_YELLOW "\033[1;33m"
#define L_PURPLE "\033[1;35m"
#define L_GREEN "\033[1;32m"
#define L_BLUE "\033[1;94m"
#define RESET "\033[0m"

#include <string>

class WrongAnimal {
 protected:
  std::string type_;

 public:
  WrongAnimal(void);
  WrongAnimal(const WrongAnimal& src);

  WrongAnimal& operator=(const WrongAnimal& rhs);

  void makeSound(void) const;
  std::string getType(void) const;

  ~WrongAnimal(void);
};

#endif  // WRONGANIMAL_HPP
