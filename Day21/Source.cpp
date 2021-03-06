#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

/**
*    Name: printArray
*    Print each element of the generic vector on a new line. Do not return anything.
*    @param A generic vector
**/
template <class T>
void printArray(vector<T> v)
{
  for (auto e : v)
    cout << e << endl;
}

// Write your code here

int main() {
  /* Redirecting cin to input file */
  std::ifstream in("input.txt");
  std::streambuf *cinbuf = std::cin.rdbuf(); //save old buf
  std::cin.rdbuf(in.rdbuf()); //redirect std::cin to in.txt!

  int n;

  cin >> n;
  vector<int> int_vector(n);
  for (int i = 0; i < n; i++) {
    int value;
    cin >> value;
    int_vector[i] = value;
  }

  cin >> n;
  vector<string> string_vector(n);
  for (int i = 0; i < n; i++) {
    string value;
    cin >> value;
    string_vector[i] = value;
  }

  printArray<int>(int_vector);
  printArray<string>(string_vector);

  system("pause");
  return 0;
}