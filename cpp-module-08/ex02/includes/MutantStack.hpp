/**
 * @file MutantStack.hpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-08-12
 * @brief Stack that is iteratable
 */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
 public:
  typedef typename std::stack<T>::container_type::iterator iterator;
  typedef typename std::stack<T>::container_type::const_iterator const_iterator;
  MutantStack(void) {}
  MutantStack(const MutantStack& src) : std::stack<T>(src) {}

  MutantStack& operator=(const MutantStack& rhs) {
    return std::stack<T>::operator=(rhs);
  }

  iterator begin(void) { return std::stack<T>::c.begin(); }
  iterator end(void) { return std::stack<T>::c.end(); }
  const_iterator begin(void) const { return std::stack<T>::c.begin(); }
  const_iterator end(void) const { return std::stack<T>::c.end(); }

  virtual ~MutantStack(void) {}
};

#endif  // MUTANTSTACK_HPP
