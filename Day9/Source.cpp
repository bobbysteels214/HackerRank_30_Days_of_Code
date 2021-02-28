#include <iostream>

using namespace std;

// Complete the factorial function below.
int factorial(int n)
{
  if (n == 1)
    return 1;
  else
    return n * factorial(n - 1);
}

int main()
{
  int n;
  cin >> n;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  int result = factorial(n);

  cout << result << "\n";

  system("pause");
  return 0;
}
