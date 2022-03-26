#include <iostream>

int main() {
  bool redLight = true;
  bool greenLight = false;

  // Flow Control Statements
  if (redLight == true) {
    std::cout << "Stop!" << std::endl;
  } else {
    std::cout << "Go through!" << std::endl;
  }

  if (greenLight) {
    std::cout << "The light is green!" << std::endl;
  } else {
    std::cout << "The light is NOT green!" << std::endl;
  }

  // Check memory size of booleans
  std::cout << "sizeof bool: " << sizeof(bool) << std::endl;

  // Printing out boolean value
  // NOTE: It will output true as 1, false as 0
  std::cout << "redLight: " << redLight << std::endl;
  std::cout << "greenLight: " << greenLight << std::endl;

  // To fix this, use boolalpha flag in cout
  std::cout << "--------- Applying boolalpha flag ---------" << std::endl;
  std::cout << std::boolalpha;
  std::cout << "redLight: " << redLight << std::endl;
  std::cout << "greenLight: " << greenLight << std::endl;
  return 0;
}