/**
 * @file Brain.hpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-16
 * @brief Brain of animals - ex01
 */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain {
 private:
  std::string ideas_[100];

 public:
  Brain(void);
  Brain(const Brain& src);

  Brain& operator=(const Brain& rhs);

  const std::string* getIdeas(void) const;

  ~Brain(void);
};

#endif
