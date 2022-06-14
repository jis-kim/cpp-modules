/**
 * @file megaphone.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-06-14
 * @brief
 */

#include <iostream>
#include <string>

int main(int argc, char **argv) {
  if (argc == 1) {
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    return (0);
  }
  int len;
  std::string msg;
  while (*++argv) msg += *argv;
  len = msg.length();
  for (int i = 0; i < len; i++) {
    msg[i] = toupper(msg[i]);
  }
  std::cout << msg << '\n';
  return (0);
}
