#include <iostream>
#include <math.h>
//#include <bits/stdc++.h>

using namespace std;

// Complete the solve function below.
void solve(double meal_cost, int tip_percent, int tax_percent) {
  double cost = meal_cost                          +
               (meal_cost * (tip_percent / 100.0)) +
               (meal_cost * (tax_percent / 100.0));

  cout << round(cost) << endl;
}

int main()
{
  double meal_cost;
  cin >> meal_cost;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  int tip_percent;
  cin >> tip_percent;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  int tax_percent;
  cin >> tax_percent;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  solve(meal_cost, tip_percent, tax_percent);

  system("pause");
  return 0;
}