#include <iostream>

template <typename T>
T max(T a, T b);

int main() {
  int num1 = 4;
  int num2 = 6;
  double d1 = 2.4;
  double d2 = 2.6;
  std::cout << "max between num1 and num2 is: " << max<int>(num1, num2) << "\n";
  std::cout << "max between d1 and d2 is: " << max<double>(d1, d2) << "\n";
  return 0;
}

template <typename T>
T max(T x, T y) {
  return x > y ? x : y;
}