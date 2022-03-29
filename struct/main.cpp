#include <iostream>

struct Cat {
  std::string name;
};

void printCatInfo(const Cat& cat) {
  std::cout << "printCatInfo prints the cat's name: " << cat.name << "\n";
}

int main() {
  // HELLO!
  Cat c1;
  c1.name = "Kitty";
  std::cout << "Cat name is: " << c1.name << std::endl;
  printCatInfo(c1);
  return 0;
}