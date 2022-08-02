/**
 * @file main.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-08-02
 * @brief
 */

#include <cstdint>
#include <iostream>

#include "Data.hpp"

uintptr_t serialize(Data* ptr) { return reinterpret_cast<uintptr_t>(ptr); }

Data* deserialize(uintptr_t raw) { return reinterpret_cast<Data*>(raw); }

int main(void) {
  Data* data = new Data();
  data->value_ = 10;

  std::cout << data << '\n';
  uintptr_t integer(serialize(data));
  std::cout << integer << '\n';

  Data* sData = deserialize(integer);
  std::cout << sData << '\n';

  std::cout << "value is " << sData->value_ << '\n';
}
