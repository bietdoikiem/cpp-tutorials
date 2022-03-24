#include <iostream>
#include <string>

int main() {
  /*
  // Output data to terminal
  std::cout << "Hello C++20" << std::endl;
  int num = 20;
  std::cout << "Age: " << num << std::endl;
  // Output message to standard error output
  std::cerr << "Error message: Unexpected event occurred." << std::endl;
  // Log to stdout (Often used to log events like database events)
  std::clog << "Log message: Event A occurred." << std::endl;
  */

  /*
  // Input data from terminal
  int age1;
  std::string name;
  std::cout << "Please type in your name and age below: " << std::endl;

  // NOTE: This method of cin receive input from different lines
  // std::cin >> name;
  // std::cin >> age1;

  // NOTE: This method of cin receive input from the same line, separated by space.
  std::cin >> name >> age1;

  std::cout << "Hello " << name << ", you're " << age1 << " years old!" << std::endl;
  */

  // Data with spaces
  std::string fullName;
  int age2;
  std::cout << "Please type in your full name and age below: " << std::endl;
  std::getline(std::cin, fullName);
  std::cin >> age2;
  std::cout << "Hello " << fullName << ", you're " << age2 << " years old!" << std::endl;
  return 0;
}