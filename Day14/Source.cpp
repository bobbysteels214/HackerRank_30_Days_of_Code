#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
private:
  vector<int> elements;

public:
  int maximumDifference;

  // Add your code here
  Difference(vector<int> elements)
  {
    this->elements = elements;
    this->maximumDifference = 0;
  }

  void computeDifference(void)
  {
    int smallest = 100;
    int largest = 0;

    for (auto& x : elements) {
      smallest = std::min(smallest, x);
      largest = std::max(largest, x);
    }

    maximumDifference = largest - smallest;
  }

}; // End of Difference class

int main() {
  int N;
  cin >> N;

  vector<int> a;

  for (int i = 0; i < N; i++) {
    int e;
    cin >> e;

    a.push_back(e);
  }

  Difference d(a);

  d.computeDifference();

  cout << d.maximumDifference;

  system("pause");
  return 0;
}