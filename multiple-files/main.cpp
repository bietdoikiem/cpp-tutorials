#include <iostream>

#include "compare.h"

int main() {
  int num1 = 200;
  int num2 = 201;
  std::cout << "Maximum between num1 and num2 is: " << max(num1, num2)
            << std::endl;
  return 0;
}