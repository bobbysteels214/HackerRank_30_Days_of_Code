//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isHourGlass(const vector<vector<int>>& v, int i, int j)
{
  // i + 2 < rows && j + 2 < cols
  return ((i + 2 < int(v.size())) && (j + 2 < int(v[i].size())));
}


int sum(const vector<vector<int>>& v, int i, int j)
{
  // 1 2 3
  //   4
  // 5 6 7
  return v[i][j]   + v[i][j+1]   + v[i][j+2] +
                     v[i+1][j+1]             +
         v[i+2][j] + v[i+2][j+1] + v[i+2][j+2];
}


int main()
{
  int max = INT_MIN;
  vector<vector<int>> arr = { { -1, -1,  0, -9, -2, -2 },
                              { -2, -1, -6, -8, -2, -5 },
                              { -1, -1, -1, -2, -3, -4 },
                              { -1, -9, -2, -4, -4, -5 },
                              { -7, -3, -3, -2, -9, -9 },
                              { -1, -3, -1, -2, -4, -5 },
                            };

  //for (const auto& x : arr) {
  //  for (const auto& y : x)
  //    cout << y << " ";
  //  cout << endl;
  //}

  for (size_t i = 0; i < arr.size(); ++i) {
    for (size_t j = 0; j < arr[i].size(); ++j) {
      if (isHourGlass(arr, i, j)) {
        max = std::max(max, sum(arr, i, j));
      }
    }
  }

  cout << max << endl;

  system("pause");
  return 0;
}