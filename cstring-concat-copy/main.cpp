#include <cstring>
#include <iostream>

int main() {
  // concatenating string
  std::cout << "----strcat----" << std::endl;
  char dest[20] = "Hello";
  char src[8] = " World!";
  std::strcat(dest, src);
  std::cout << "dest after concat: " << dest << std::endl;
  std::cout << "----strncat----" << std::endl;
  std::strncat(dest, src, 3);
  std::cout << "dest after strncat: " << dest << std::endl;
  // Copy string
  char src2[]{"Copy me!"};
  char cp[std::strlen(src2) + 1];
  std::strcpy(cp, src2);
  std::cout << "cp after copy is: " << cp << std::endl;
  return 0;
}