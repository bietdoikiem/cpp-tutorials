#include <iostream>
#include <iomanip>

int main() {
  // float errNum{312312542222}; // NOTE: This will be caught by the compiler for type narrowing from long int to float.
  // float errNum = 312312542222; // NOTE: This is not safe as it is automatically converted to long int!
  // std::cout << "errNum: " << errNum << std::endl;
  
  std::cout << "------------ Precision ------------" << std::endl;
  // Declare and initialize variables
  // NOTE: float must have suffix, otherwise it will be understood as double by compiler.
  float num1 = 1.12345678901234567890f; // 7 digit precision 
  double num2 = 1.12345678901234567890; // 15 digit precision
  long double num3 = 1.12345678901234567890L; // NOTE: On my 64-bit hardware, long double has the same precision as double (as they're alias).

  // Print out the memory sizes
  std::cout << "sizeof float: " << sizeof(float) << " bytes" << std::endl;
  std::cout << "sizeof double: " << sizeof(double) << " bytes" << std::endl;
  std::cout << "sizeof long double: " << sizeof(long double) << " bytes" << std::endl;

  // Precision settings for cout
  std::cout << std::setprecision(20);
  std::cout << "num1 is: " << num1 << std::endl;
  std::cout << "num2 is: " << num2 << std::endl;
  std::cout << "num3 is: " << num3 << std::endl;

  // Scientific Notations
  std::cout << "------------ Scientific Notation ------------" << std::endl;
  double num4 = 1.2423e11;
  double num5 = 1.2423e-11;
  std::cout << "num4 is: " << num4 << std::endl;
  std::cout << "num5 is: " << num5 << std::endl;

  // Special cases
  std::cout << "------------ Special Cases ------------" << std::endl;
  double num6 = 0.0;
  double num7 = 0.0;
  double num8 = 1.0;
  std::cout << "Result of 0.0/0.0: " << num6/num7 << std::endl; // nan (Not a Number)
  std::cout << "Result of 1.0/0.0: " << num8/num7 << std::endl; // inf (Infinity)
  return 0;
}