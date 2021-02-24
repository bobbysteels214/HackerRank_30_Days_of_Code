#include <iostream>
#include <string>

int main()
{
  std::string input;
  std::getline(std::cin, input);
  std::cout << "Hello, World." << std::endl;
  std::cout << input << std::endl;

  //system("pause");
  return 0;
}