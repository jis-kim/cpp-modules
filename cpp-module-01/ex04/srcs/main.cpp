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
    return EXIT_FAILURE;
  }
  if (!*argv[1] || !*argv[2] || !*argv[3]) {
    std::cout << "Invalid Arguments: \n";
    return EXIT_FAILURE;
  }
  std::ifstream file(argv[1]);  // constructor
  std::string buf;
  try {
    file.seekg(0, std::ios::end);
    int size = file.tellg();
    buf.resize(size);
    file.seekg(0, std::ios::beg);  // 다시 돌려놔야 함!!
    file.read(&buf[0], size);

    buf.find(argv[2], 0);
  } catch (std::ifstream::failure e) {
    std::cout << "Something Wrong: " << e.what() << '\n';
    return EXIT_FAILURE;
  }
}
