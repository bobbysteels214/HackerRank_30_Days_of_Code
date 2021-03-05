//#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <chrono>
#include <random>

using namespace std;

// Populate input.txt with hackerrank format
void populateInputFile(void)
{
  std::ofstream fout("input.txt");

  std::random_device rd; // obtain a random number from hardware
  std::mt19937 gen(rd()); // seed the generator
  std::uniform_int_distribution<> distr(2, 600); // define the range
  int num = distr(gen);
  distr = std::uniform_int_distribution<int>(1, (int)2e6);

  fout << num << endl;

  for (int i = 0; i<num; ++i)
    fout << distr(gen) << ' '; // generate numbers
  fout.close();
}



int main() {
  /* Redirecting cin to input file */
  std::ifstream in("input.txt");
  std::streambuf *cinbuf = std::cin.rdbuf(); //save old buf
  std::cin.rdbuf(in.rdbuf()); //redirect std::cin to in.txt!

  // Create input file similar to hackerrank
  populateInputFile();

  int n;
  int total_swaps = 0;
  cin >> n;
  vector<int> a(n);
  for (int a_i = 0; a_i < n; a_i++) {
    cin >> a[a_i];
  }

  // Write Your Code Here
  for (int i = 0; i < n; ++i) {
    int loop_swaps = 0;
    for (int j = 0; j < n - 1; ++j) {
      if (a[j] > a[j + 1]) {
        std::swap(a[j], a[j + 1]);
        loop_swaps++;
        total_swaps++;
      }
    }
    if (loop_swaps == 0)
      break;
  }

  cout << "Array is sorted in " << total_swaps << " swaps." << endl;
  cout << "First Element: " << a[0] << endl;
  cout << "Last Element: " << a[a.size() - 1] << endl;

  system("pause");
  return 0;
}
