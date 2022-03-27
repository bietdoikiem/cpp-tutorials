#include <iostream>
#include <string>

int main() {
  // Declare an array of ints
  // NOTE: Uninitialized variable will result in garbage data
  int scores[10];

  // Write with loop
  std::cout << "1. scores array:" << std::endl;
  for (int i = 0; i < std::size(scores); i++) {
    scores[i] = i + 20;
  }

  // Read with loop
  for (int i = 0; i < std::size(scores); i++) {
    std::cout << "scores[" << i << "]: " << scores[i] << std::endl;
  }

  // Declare and Initialize the array, also omitting the size
  std::cout << "2. height array:" << std::endl;
  int heights[]{190, 180, 170, 160, 155, 165, 150};

  // Read with loop
  for (int i = 0; i < std::size(heights); i++) {
    std::cout << "heights[" << i << "]: " << heights[i] << std::endl;
  }

  // Range-based loop
  std::cout << "3. animals array:" << std::endl;
  std::string animals[]{"lion", "elephant", "dog", "cat", "tiger"};
  std::cout << "Animals in the list are:" << std::endl;
  for (std::string a : animals) {
    std::cout << a << std::endl;
  }

  // Character print-outs
  // NOTE: The /0 character is the NULL termination character. If we don't have
  // that, it may bring some garbage characters. C String is string with null
  // termination!
  char msg1[]{'H', 'e', 'l', 'l', 'o', '\0'};
  std::cout << "msg1: " << msg1
            << " - length of message is: " << std::size(msg1) << std::endl;

  // Literal initialization of C-String
  char msg2[]{"Hello"};
  std::cout << "msg2: " << msg2
            << " - length of message is: " << std::size(msg2) << std::endl;
  return 0;
}