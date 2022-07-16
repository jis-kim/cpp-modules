/**
 * @file Brain.hpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-16
 * @brief Brain of animals - ex01
 */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#define L_CYAN "\033[1;96m"
#define L_RED "\033[1;31m"
#define L_YELLOW "\033[1;33m"
#define L_PURPLE "\033[1;35m"
#define L_GREEN "\033[1;32m"
#define L_BLUE "\033[1;94m"
#define RESET "\033[0m"

#include <string>

class Brain {
 private:
  std::string ideas_[100];

 public:
  Brain(void);
  Brain(const Brain& src);
  Brain(const std::string& idea);

  Brain& operator=(const Brain& rhs);

  const std::string* getIdeas(void) const;

  ~Brain(void);
};

#endif
