#include <iostream>

int main() {
  // 1. Braced initialization
  // int uninitialized; // Uninitialized value will be assigned random garbage value
  // int zeroInitialization {}; // Zero value
  // int pseudoNum1{5};
  // int pseudoNum2{10};
  // int compoundNum{pseudoNum1 + pseudoNum2};
  // // int errNum{2.9}; // NOTE: This will raise ERROR in compiler
  // // Output data
  // std::cout << "Uninitialized value: " << uninitialized << std::endl;
  // std::cout << "Zero value: " << zeroInitialization << std::endl;
  // std::cout << "Pseudo 1 value: " << pseudoNum1 << std::endl; // 5
  // std::cout << "Compound value: " << compoundNum << std::endl; // 15

  // 2. Function initialization
  // // int zeroInitialization(); // NOTE: Only braced initialization allows zero init
  // int pseudoNum1(5);
  // int pseudoNum2(10);
  // int compoundNum(pseudoNum1 + pseudoNum2);
  // int errNum(2.9); // NOTE: This will not raise raise error, instead it will omit the floating point

  // // Output data
  // std::cout << "Pseudo 1 value: " << pseudoNum1 << std::endl; // 5
  // std::cout << "Compound value: " << compoundNum << std::endl; // 15
  // std::cout << "Err value: " << errNum << std::endl; // 2

  // 3. Assignment initialization

  int pseudoNum1 = 5;
  int pseudoNum2 = 10;
  int compoundNum = pseudoNum1 + pseudoNum2;
  int errNum = 2.9; // NOTE: This will not raise raise error, instead it will omit the floating point

  // Output data
  std::cout << "Pseudo 1 value: " << pseudoNum1 << std::endl; // 5
  std::cout << "Compound value: " << compoundNum << std::endl; // 15
  std::cout << "Err value: " << errNum << std::endl; // 2

  // Check the memory size (bytes) of variables
  std::cout << "sizeof int type: " << sizeof(int) << std::endl; // 4 (32 bits)
  std::cout << "sizeof pseudo num: " << sizeof(pseudoNum1) << std::endl; // 4 (32 bits)
  return 0;
}