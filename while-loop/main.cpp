#include <iostream>

int main() {
  size_t i = 0;
  while (i < 10) {
    std::cout << i << ": "
              << "I love C++!" << std::endl;
    i++;
  }
  std::cout << "Loop done!" << std::endl;
  return 0;
}