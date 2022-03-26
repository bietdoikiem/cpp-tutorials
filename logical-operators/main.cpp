#include <iostream>

int main() {
  bool a = true;
  bool b = false;
  bool c = true;

  // Logical operators
  std::cout << std::boolalpha;
  std::cout << "a && b: " << (a && b) << std::endl;
  std::cout << "a || b: " << (a || b) << std::endl;
  std::cout << "(a || b) && c: " << ((a || b) && c) << std::endl;
  std::cout << "!a: " << !a << std::endl;
  std::cout << "!b: " << !b << std::endl;
  std::cout << "!c: " << !c << std::endl;
  return 0;
}