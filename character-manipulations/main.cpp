#include <cstring>
#include <iostream>

int main() {
  // Check if character is alphanumeric
  std::cout << "-----alphanumeric-----" << std::endl;
  std::cout << "is 'C' alphanumeric: " << std::isalnum('C') << std::endl;
  std::cout << "is '^' alphanumeric: " << std::isalnum('^') << std::endl;
  // Can use isalnum as check condition
  char inputChar{'*'};
  if (std::isalnum(inputChar)) {
    std::cout << "* is alphanumeric!" << std::endl;
  } else {
    std::cout << "* is NOT alphanumeric!" << std::endl;
  }

  // Check if character is alphabetic
  std::cout << "-----alphabetical-----" << std::endl;
  std::cout << "is 'e' alphabetical: " << std::isalpha('e') << std::endl;

  // Check for blank characters
  std::cout << "-----blank-----" << std::endl;
  char msg[]{"Hello, this is Minh. I'm a Junior Software Developer."};
  size_t blankCount = 0;
  for (size_t i = 0; i < std::size(msg); i++) {
    // Found blank character
    if (std::isblank(msg[i])) {
      std::cout << "Found blank character at index: " << i << std::endl;
      blankCount++;
    }
  }
  std::cout << "In total, there are " << blankCount
            << " characters in the string." << std::endl;
  // Turn all uppercase into lowercase characters of a string
  std::cout << "-----upper/lower-case-----" << std::endl;
  char text[]{"Hi Minh. I've been waiting for you here at the Kremlin Palace."};
  char dest[std::size(text)];
  for (size_t i = 0; i < std::size(text); i++) {
    dest[i] = std::tolower(text[i]);
  }
  std::cout << "The original text is: " << text << std::endl;
  std::cout << "The lowercase text is: " << dest << std::endl;

  // Find the all occurrences of a string
  std::cout << "-----strchr for all occurrences-----" << std::endl;
  const char* str{"This is the dummy text to search for occurrences."};
  const char* res = str;
  char ch = 'o';
  while ((res = std::strchr(res, ch)) != nullptr) {
    std::cout << "Found "
              << "target "
              << " starting at '" << res << "'\n";
    res++;  // Pointer arithemtic
  }

  // Find last/right occurrences of a string
  std::cout << "-----strrchr------" << std::endl;
  const char* path{"/home/bietdoikiem/main.cpp"};
  char* output = std::strrchr(path, '/');
  std::cout << "filename is: " << output + 1 << std::endl;

  // Compare strings using strcmp
  std::cout << "-----strcmp------" << std::endl;
  const char* strData1{"Minh"};
  const char* strData2{"Binh"};
  std::cout << "strcmp(" << strData1 << ", " << strData2
            << "): " << std::strcmp(strData1, strData2) << std::endl;
  // strData1 and strData2 pointers are mutable as they're pointers to constant
  // char. On the other hand char* const made the pointer not mutable as it's
  // the consant pointer which points to the mutable char.
  strData1 = "Kin";
  strData2 = "Bin";
  return 0;
}