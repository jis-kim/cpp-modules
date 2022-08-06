#include <Array.hpp>
#include <iostream>

#define MAX_VAL 750

void test(void) {
  Array<int> numbers(UINT_MAX - 3);
  int* mirror = new int[MAX_VAL];
  srand(time(NULL));
  for (int i = 0; i < MAX_VAL; i++) {
    const int value = rand();
    numbers[i] = value;
    mirror[i] = value;
  }
  // SCOPE
  {
    Array<int> tmp = numbers;
    Array<int> test(tmp);
  }

  for (int i = 0; i < MAX_VAL; i++) {
    if (mirror[i] != numbers[i]) {
      std::cerr << "didn't save the same value!!" << std::endl;
      exit(1);
    }
  }
  try {
    numbers[-2] = 0;
  } catch (const std::exception& e) {
    std::cerr << e.what() << '\n';
  }
  try {
    numbers[MAX_VAL] = 0;
  } catch (const std::exception& e) {
    std::cerr << e.what() << '\n';
  }

  for (int i = 0; i < MAX_VAL; i++) {
    numbers[i] = rand();
  }
  delete[] mirror;

  Array<char> charArray(100);
  for (int i = 0; i < 100; ++i) charArray[i] = rand() % ('Z' - 'A') + 'A';

  for (int i = 0; i < 100; ++i) std::cout << charArray[i];
  std::cout << '\n';
}

int main(int, char**) {
  test();
  system("leaks arrayTest");
  return 0;
}
