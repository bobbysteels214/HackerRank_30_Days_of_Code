#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

bool isPrime(int n)
{
  if (n <= 1)
    return false;

  for (int i = 2; i <= sqrt(n); ++i) {
    if (n % i == 0)
      return false;
  }

  return true;
}


int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  /* Redirecting cin to input file */
  std::ifstream in("input.txt");
  std::streambuf *cinbuf = std::cin.rdbuf(); //save old buf
  std::cin.rdbuf(in.rdbuf()); //redirect std::cin to input.txt!

  int t = 0;
  int n;

  cin >> t;

  for (int i = 0; i < t; ++i) {
    cin >> n;
    if (isPrime(n))
      cout << "Prime\n";
    else
      cout << "Not prime\n";
  }

  system("pause");
  return 0;
}