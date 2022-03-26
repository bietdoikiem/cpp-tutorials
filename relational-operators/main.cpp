#include <iostream>

int main() {
  int num1 = 6;
  int num2 = 5;

  // Output comparison result
  // NOTE: Pay close attention to the parenthese uses for comparison in std
  // cout.
  std::cout << std::boolalpha;  // Output true, false as text
  std::cout << "num1 < num2: " << (num1 < num2) << std::endl;
  std::cout << "num1 > num2: " << (num1 > num2) << std::endl;
  std::cout << "num1 == num2: " << (num1 == num2) << std::endl;
  std::cout << "num1 <= num2: " << (num1 <= num2) << std::endl;
  std::cout << "num1 >= num2: " << (num1 >= num2) << std::endl;
  std::cout << "num1 != num2: " << (num1 != num2) << std::endl;
  return 0;
}