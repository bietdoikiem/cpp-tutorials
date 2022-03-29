#include <iostream>

#include "cone.h"

int main() {
  std::cout << "Hello Cone Class!" << std::endl;
  Cone c;  // 2.5, 3
  c.setRadius(2.5);
  c.setHeight(3);
  std::cout << "Cone volume is: " << c.volume() << "\n";
  std::cout << "-------pointerclass-------\n";
  Cone* cPtr = &c;
  std::cout << "Cone volume through pointer is: " << cPtr->volume() << "\n";
  std::cout << "-------instantiate class with pointer (in the heap)-------\n";
  Cone* heapCone = new Cone(4, 5);
  std::cout << "Cone volume through pointer in heap is: " << heapCone->volume()
            << "\n";
  delete heapCone;
  return 0;
}