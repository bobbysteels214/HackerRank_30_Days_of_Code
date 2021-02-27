#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;


int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  map<string, string> phonebook;
  int n;
  string name, number;
  vector<string> names;

  //cout << "enter test cases\n";
  cin >> n;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  //cout << "enter pairs\n";
  for (auto i = 0; i < n; ++i) {
    cin >> name >> number;
    phonebook[name] = number;;
  }

  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  //cout << "enter names\n";
  while (getline(cin, name)) {
    if (name == "")
      break;
    auto itr = phonebook.find(name);
    if (itr != phonebook.end())
      cout << itr->first << "=" << itr->second << endl;
    else
      cout << "Not found\n";
  }

  //system("pause");
  return 0;
}

