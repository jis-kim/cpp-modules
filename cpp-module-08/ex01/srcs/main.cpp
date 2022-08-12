/**
 * @file main.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-08-11
 * @brief
 */

#include "Span.hpp"

int main(void) {
  try {
    Span s;
    s.addNumber(3);
    std::cout << "3 is added\n";
    s.addNumber(1);
    std::cout << "1 is added\n";

  } catch (const std::exception& e) {
    std::cout << e.what() << '\n';
  }

  try {
    Span s(10);
    srand(time(NULL));
    for (int i = 0; i < 10; ++i) {
      s.addNumber(rand() % 100);
    }
    s.print();
    std::cout << '\n';

    std::cout << "shortest span: " << s.shortestSpan() << '\n';
    std::cout << "longest span: " << s.longestSpan() << '\n';

    Span copyS(s);
    copyS.print();

    Span copycopyS;
    copycopyS = s;
    copycopyS.print();

  } catch (const std::exception& e) {
    std::cout << e.what() << '\n';
  }

  system("leaks span");
  return 0;
}
