//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

using namespace std;


int main()
{
  int consecutive = 0;
  int max = 0;
  int n;
  
  cin >> n;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  while (n > 0) {
    if (n % 2 == 1)
      consecutive++;
    else
      consecutive = 0;

    max = std::max(consecutive, max);
    n /= 2;
  }

  cout << max << endl;

  system("pause");
  return 0;
}