#include <iostream>

int main() {
  int age = 20;
  const int& refAge = age;  // Cannot change the value of refAge.
  // Alias to const reference is:
  const int* const pAge = &age;
  // NOTE: There are 2 const keywords here. The 1st one is to ensure you cannot
  // change the pointer, and the 2nd one to ensure that you cannot change the
  // value.
  return 0;
}