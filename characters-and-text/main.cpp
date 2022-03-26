#include <iostream>

int main() {
  char c1 = 'a';
  char c2 = 'r';
  char c3 = 'r';
  char c4 = 'o';
  char c5 = 'w';
  std::cout << c1 << std::endl;
  std::cout << c2 << std::endl;
  std::cout << c3 << std::endl;
  std::cout << c4 << std::endl;
  std::cout << c5 << std::endl;

  // NOTE: 1 character = 1 bytes (256 different values from 0 to 255)
  std::cout << "sizeof char: " << sizeof(char) << " byte(s)" << std::endl;

  // Assign char variable with ASCII code (integral)
  char value = 65;  // 'A'
  std::cout << "value: " << value << std::endl;
  std::cout
      << "value(int): " << static_cast<int>(value)
      << std::endl;  // Can cast to integer type to receive actual ASCII code
  return 0;
}