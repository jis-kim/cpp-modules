/**
 * @file main.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-07-23
 * @brief Let's test exceptions!!!!!!!
 */

#include "Bureaucrat.hpp"

int main(void) {
  try {
    Bureaucrat king("king", 1);

    std::cout << king << '\n';
    king.increaseGrade();

  } catch (std::exception& e) {
    std::cout << e.what() << '\n';
  }

  try {
    Bureaucrat prince("prince", 2);

    for (int i = 0; i < 1000; i++) {
      std::cout << '[' << i << "] " << prince << '\n';
      prince.decreaseGrade();
    }
  } catch (std::exception& e) {
    std::cout << e.what() << '\n';
  }
}
