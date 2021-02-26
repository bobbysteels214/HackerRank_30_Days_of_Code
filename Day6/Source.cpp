#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int test_cases;
  string s;
  std::vector<string> v;

  cin >> test_cases;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  for (int i = 0; i < test_cases; ++i) {
    getline(cin, s);
    v.push_back(s);
  }

  for (string x : v) {
    // Print evens
    for (size_t i = 0; i < x.length(); ++i) {
      if (i%2 == 0)
        cout << x[i];
    }
    cout << " ";
    // Print odds
    for (size_t i = 0; i < x.length(); ++i) {
      if (i % 2 == 1)
        cout << x[i];
    }
    cout << endl;
  }

  system("pause");
  return 0;
}
