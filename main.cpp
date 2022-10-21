#include <iostream>
#include "warehouse.hpp"

int main() {
  int test[5][5] = { {00, 01, 02, 03, 04}, {10, 11, 12, 13, 14}, {20, 21, 22, 23, 24}, {30, 31, 32, 33, 34}, {40, 41, 42, 43, 44} };
  std::cout << "Test:";
  std::cout << test[2][3] << std::endl;
  std::cout << "Hello World!\n";
}
