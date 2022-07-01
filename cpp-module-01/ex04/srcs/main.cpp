/**
 * @file main.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-06-27
 * @brief
 */

#include <fstream>
#include <iostream>

void ftReplace(std::string &buf, std::string &from, std::string &to) {
  size_t fLen = from.size();
  for (size_t pos = 0; pos != std::string::npos;) {
    pos = buf.find(from, pos);
    if (pos == std::string::npos) break;
    buf.erase(pos, fLen);
    buf.insert(pos, to);
    pos += to.size();
  }
}

std::string readFile(std::string &fileName) {
  std::ifstream inputFile;
  std::string buf;
  inputFile.exceptions(std::ifstream::failbit | std::ifstream::badbit);
  try {
    inputFile.open(fileName, std::fstream::in);
    inputFile.seekg(0, std::ios::end);
    size_t size = inputFile.tellg();
    buf.resize(size);
    inputFile.seekg(0, std::ios::beg);
    inputFile.read(&buf[0], size);
    inputFile.close();
  } catch (std::ifstream::failure e) {
    std::cout << "Something Wrong: " << e.what() << '\n';
    exit(EXIT_FAILURE);
  }
  return (buf);
}

void writeFile(std::string &buf, std::string &fileName) {
  std::ofstream outputFile;
  outputFile.exceptions(std::ofstream::failbit | std::ofstream::badbit);
  try {
    outputFile.open(fileName.append(".replace"), std::fstream::out);
    outputFile << buf;
    outputFile.close();
  } catch (std::ofstream::failure e) {
    std::cout << "Something Wrong: " << e.what() << '\n';
    exit(EXIT_FAILURE);
  }
}

int main(int argc, char **argv) {
  if (argc != 4) {
    std::cout << "Usage: <filename> <s1> <s2>\n";
    return EXIT_FAILURE;
  }
  if (!*argv[1] || !*argv[2] || !*argv[3]) {
    std::cout << "Invalid Arguments: \n";
    return EXIT_FAILURE;
  }
  std::string buf, fileName(argv[1]), from(argv[2]), to(argv[3]);
  buf = readFile(fileName);
  ftReplace(buf, from, to);
  writeFile(buf, fileName);
  return EXIT_SUCCESS;
}
