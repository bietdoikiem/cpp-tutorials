#include <iostream>

int main() {
  // NOTE: Pointer occupies 8 bytes in memory
  int* pNum = nullptr;
  double* pFractionalNum = nullptr;

  // Declare and assign pointers
  int randNum = 10;
  int* pRandNum = &randNum;
  std::cout << "randNum: " << randNum << std::endl;
  std::cout << "Address of randNum: " << pRandNum << std::endl;
  // Dereference a pointer
  std::cout << "Value of randNum's pointer: " << *pRandNum << std::endl;

  // const char pointer as c-string literal
  const char* msg{"Hello"};
  std::cout << "msg: " << msg << std::endl;
  // NOTE: Deferencing a const char will result in the first letter.
  std::cout << "*msg: " << *msg << std::endl;

  // Dynamically initialize a pointer to the Heap
  int* pNum2 = new int(2);
  std::cout << "pNum2: " << pNum2 << std::endl;
  std::cout << "*pNum2: " << *pNum2 << std::endl;

  // Try/Catch exception of abnormal new pointer
  try {
    int* errData = new int[1000000000000000];
  } catch (std::exception& e) {
    std::cerr << "Exception Caught: " << e.what() << std::endl;
  }

  // Null pointer safety
  int* pNum3 = nullptr;
  if (pNum3) {
    std::cout << "Points to valid pointer!" << std::endl;
  } else {
    std::cout << "Points to NOT valid pointer!" << std::endl;
  }
  return 0;
}