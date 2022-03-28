#include <iostream>

// addAge cannot modify the passed-in argument as it is passed by value
void addAge(int age) { age++; }

// minusAge can modify the passed-in argument as it is passed by pointer
void minusAge(int* age) { (*age)--; }

// changeAge can modify the passed-in argument as it is passed by reference
// (recommended way in modern C++)
void changeAge(int& age, int changeAge) { age = changeAge; }

int main() {
  // TODO:
  int minhAge = 21;
  addAge(minhAge);
  std::cout << "minhAge after addAge: " << minhAge << std::endl;
  minusAge(&minhAge);
  std::cout << "minhAge after minusAge: " << minhAge << std::endl;
  changeAge(minhAge, 30);
  std::cout << "minhAge after changeAge: " << minhAge << std::endl;
  return 0;
}
