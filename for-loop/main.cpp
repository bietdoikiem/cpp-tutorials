#include <iostream>

int main() {
  // For loop (as traditional)
  for (int i = 0; i < 10; i++) {
    std::cout << "I love C++!" << std::endl;
  }
  // For loop using size_t, type alias for unsigned long long
  for (size_t i = 0; i < 10; i++) {
    std::cout << "I love C++ again!" << std::endl;
  }
  // Check the actual memory uses of size_t
  std::cout << "sizeof size_t: " << sizeof(size_t) << " byte(s)" << std::endl;
  return 0;
}