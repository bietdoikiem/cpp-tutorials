#include <iostream>

int main() {
  // TODO: Implementing Lambda function
  auto res = [](double r) -> double { return r * r * 3.14; }(2);
  std::cout << "area of the circle with r as 2 is: " << res << std::endl;

  auto rectangleArea = [](double a, double b) -> double { return a * b; };
  std::cout << "Area of the 2x4 rectangle is: " << rectangleArea(2, 4)
            << std::endl;
  // Using capture list (capture by value (by default))
  std::cout << "-------lambda(capture by value)-------" << std::endl;
  int rand = 50;
  auto func = [rand]() {
    std::cout << "The value of rand inside lambda is: " << rand << std::endl;
  };
  for (size_t i = 0; i < 5; i++) {
    ++rand;
    func();
    std::cout << "The actual value of rand is: " << rand << std::endl;
  }

  // Using capture list by reference
  std::cout << "-------lambda(capture by reference)-------" << std::endl;
  rand = 50;  // Reset rand
  auto anotherFunc = [&rand]() {
    std::cout << "The value of rand inside lambda is: " << rand << std::endl;
  };
  for (size_t i = 0; i < 5; i++) {
    ++rand;
    anotherFunc();
    std::cout << "The actual value of rand is: " << rand << std::endl;
  }
  // NOTE: You can pass in the capture list with '=' if you want to capture all
  // outer variables by value. OR ' You can pass in '&' if you want to capture
  // all with references
  return 0;
}