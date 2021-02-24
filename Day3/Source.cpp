#include <iostream>

using namespace std;

int main()
{
  int N;
  bool isWeird = false;

  cin >> N;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  if ((N % 2 > 0) || (N >=6 && N <= 20)) {
    isWeird = true;
  }
  
  if (isWeird)
    cout << "Weird" << endl;
  else
    cout << "Not Weird" << endl;

  system("pause");
  return 0;
}
