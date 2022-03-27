#include <cmath>
#include <iostream>

int main() {
  // TODO: floor, ceil, round, pow, exp (base e), log, abs
  int num = 7.7;
  // floor
  std::cout << "num rounded to floor is: " << std::floor(num) << std::endl;
  // ceil
  std::cout << "num rounded to ceiling is: " << std::ceil(num) << std::endl;
  // round
  std::cout << "num rounds to: " << std::round(num) << std::endl;
  // pow
  int powNum = 2;
  std::cout << "num powers to powNum: " << std::pow(num, powNum)
            << std::endl;  // (7.7)^2
  // exp
  std::cout << "exponential constant powers to powNum: " << std::exp(powNum)
            << std::endl;  // e^2
  // log(base e)
  std::cout << "log (base e) of powNum: " << std::log(powNum)
            << std::endl;  // loge(2)
  // abs
  std::cout << "absolute of powNum: " << std::abs(powNum) << std::endl;  // 2
  return 0;
}