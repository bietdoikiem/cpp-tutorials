#include <iostream>

// TODO: Represent number 248 in 4 formats: Decimal, Hexadecimal, Octal, Binary

int main() {
  int num1 = 248; // Decimal
  int num2 = 0xf8; // Hex
  int num3 = 0b11111000; // Binary
  int num4 = 0370;

  std::cout << "Decimal number: " << num1 << std::endl;
  std::cout << "Hexadecimal number: " << num2 << std::endl;
  std::cout << "Binary number: " << num3 << std::endl;
  std::cout << "Octal number: " << num3 << std::endl;
  return 0;
}