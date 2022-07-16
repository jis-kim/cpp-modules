/**
 * @file Brain.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-16
 * @brief I'm Brian of Animals !!!!!!!!!! - ex01
 */

#include "Brain.hpp"

Brain::Brain(void) {
  for (int i = 0; i < 100; i++) {
    ideas_[i] = "";
  }
}

Brain::Brain(const Brain& src) {
  for (int i = 0; i < 100; i++) {
    ideas_[i] = src.ideas_[i];
  }
}

Brain& Brain::operator=(const Brain& rhs) {
  for (int i = 0; i < 100; i++) {
    ideas_[i] = rhs.ideas_[i];
  }
  return (*this);
}

const std::string* Brain::getIdeas(void) const { return ideas_; }
