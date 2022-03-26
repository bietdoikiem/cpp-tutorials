#include <iostream>

int main() {
  int num1 = 7;
  int num2 = 2;

  // Addition
  int result = num1 + num2;
  std::cout << "result (addition): " << result << std::endl;

  // Subtraction
  result = num1 - num2;
  std::cout << "result (subtraction): " << result << std::endl;

  // Multiplication
  result = num1 * num2;
  std::cout << "result (multiplication): " << result << std::endl;

  // Division
  result = num1 / num2;
  std::cout << "result (division): " << result << std::endl;

  // Modulus
  result = num1 % num2;
  std::cout << "result (Modulus): " << result << std::endl;
  return 0;
}