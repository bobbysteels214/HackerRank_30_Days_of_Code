#include <iostream>
#include <string>

int main() {
  std::string S;
  std::cin >> S;

  try {
    std::cout << std::stoi(S) << std::endl;
  }
  catch (...) {
    std::cout << "Bad String\n";
  }

  system("pause");
  return 0;
}