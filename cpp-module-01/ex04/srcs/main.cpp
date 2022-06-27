/**
 * @file main.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-06-27
 * @brief
 */

#include <fstream>
#include <iostream>

int main(int argc, char **argv) {
  if (argc != 4) {
    std::cout << "Usage: <filename> <s1> <s2>\n";
  }
  try {
    std::ifstream file(argv[1]);  // constructor

  } catch (std::exception &e) {
    e.what();
  }

  return 0;
}
