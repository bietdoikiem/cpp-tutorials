#include <iostream>

int main() {
  // NOTE: Be careful that the do-while loop will be executed the body first
  // before it checks the condition.
  size_t i = 0;
  do {
    std::cout << "I love C++!" << std::endl;
    i++;
  } while (i < 10);
  return 0;
}