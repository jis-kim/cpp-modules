/**
 * @file Brain.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-16
 * @brief I'm Brian of Animals !!!!!!!!!! - ex02
 */

#include "Brain.hpp"

#include <iostream>

Brain::Brain(void) {
  for (int i = 0; i < 100; i++) {
    ideas_[i] = "💁‍♀️ Living Point : Human hair can drive car🚕\n";
  }
}

Brain::Brain(const Brain& src) {
  for (int i = 0; i < 100; i++) {
    ideas_[i] = src.ideas_[i];
  }
}

Brain::Brain(const std::string& idea) {
  for (int i = 0; i < 100; i++) {
    ideas_[i] = idea;
  }
}

Brain& Brain::operator=(const Brain& rhs) {
  for (int i = 0; i < 100; i++) {
    ideas_[i] = rhs.ideas_[i];
  }
  return (*this);
}

void Brain::setIdea(const int i, const std::string& idea) { ideas_[i] = idea; }

const std::string* Brain::getIdeas(void) const { return ideas_; }

Brain::~Brain(void) {
  std::cout << L_YELLOW << "Brain " << RESET << "Destructor.\n";
}

std::ostream& operator<<(std::ostream& os, const Brain& rhs) {
  const std::string* str = rhs.getIdeas();

  for (int i = 0; i < 100; i++) {
    os << "Brain [" << i << "] is " << str[i];
  };
  return (os);
}
