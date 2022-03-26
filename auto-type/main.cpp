#include <iostream>

int main() {
  // Declare auto types
  auto var1 = 0;
  auto var2 = 0.0f;
  auto var3 = 0.0l;
  auto var4 = 0.0;
  auto var5 = 'a';

  // int modifier suffixes
  auto var6 = 123u;
  auto var7 = 123ul;
  auto var8 = 123ll;

  std::cout << "var1 occupies: " << sizeof(var1) << " byte(s)" << std::endl;
  std::cout << "var2 occupies: " << sizeof(var2) << " byte(s)" << std::endl;
  std::cout << "var3 occupies: " << sizeof(var3) << " byte(s)" << std::endl;
  std::cout << "var4 occupies: " << sizeof(var4) << " byte(s)" << std::endl;
  std::cout << "var5 occupies: " << sizeof(var5) << " byte(s)" << std::endl;
  std::cout << "var6 occupies: " << sizeof(var6) << " byte(s)" << std::endl;
  std::cout << "var7 occupies: " << sizeof(var7) << " byte(s)" << std::endl;
  std::cout << "var8 occupies: " << sizeof(var8) << " byte(s)" << std::endl;
  return 0;
}