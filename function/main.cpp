#include <iostream>

// addNum adds two specified arguments together.
int addNum(int a, int b) {
  return a + b;
}

int main() {
  // NOTE: There are different ways to declare a variable in C++
  int firstNumber{3}; 
  int secondNumber = 6;
  int thirdNumber(9); // Initialization style works for C++ only
  // Output variables to stdout
  std::cout << "First number: " << firstNumber << std::endl;
  std::cout << "Second number: " << secondNumber << std::endl;
  std::cout << "Third number: " << thirdNumber << std::endl;
  // Sum variables
  int sum = firstNumber + secondNumber + thirdNumber; // 18
  std::cout << "Sum: " << sum << std::endl;
  // Sum via functions
  sum = addNum(addNum(firstNumber, secondNumber), thirdNumber); // 18
  std::cout << "Sum: " << sum << std::endl;
  // Recall the function
  sum = addNum(17, 12); // 29
  std::cout << "Sum: " << sum << std::endl;
  // Call function directly in cout
  std::cout << "Sum: " << addNum(40, 29) << std::endl; // 69 
  return 0;
}