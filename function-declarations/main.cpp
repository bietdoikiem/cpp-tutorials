#include <iostream>

void allowsBarEntrance(unsigned int age) {
  if (age >= 18) {
    std::cout << "You are allowed to enter the bar!" << std::endl;
  } else {
    std::cout << "You are NOT allowed to enter the bar! Please go away!"
              << std::endl;
  }
}

int max(int a, int b) { return a > b ? a : b; }

// NOTE: Below are function declarations
int min(int a, int b);

int main() {
  allowsBarEntrance(20);
  int num1 = 20;
  int num2 = 15;
  std::cout << "Max between num1 and num2 is: " << max(num1, num2) << std::endl;
  std::cout << "Min between num1 and num2 is: " << min(num1, num2) << std::endl;
  return 0;
}

// min is the function definition of the above declarations.
int min(int a, int b) { return a < b ? a : b; }