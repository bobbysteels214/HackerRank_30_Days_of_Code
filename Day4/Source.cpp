#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Person {
public:
  int age;
  Person(int initialAge);
  void yearPasses(void) { age++; };
  void amIOld(void);
};


int main() {
  int t;
  int age;
  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> age;
    Person p(age);
    p.amIOld();
    for (int j = 0; j < 3; j++) {
      p.yearPasses();
    }
    p.amIOld();

    cout << '\n';
  }

  system("pause");
  return 0;
}


Person::Person(int initialAge)
{
  if (initialAge < 0) {
    age = 0;
    cout << "Age is not valid, setting age to 0." << endl;
  }
  else
    age = initialAge;
}


void Person::amIOld(void)
{
  if (age < 13)
    cout << "You are young." << endl;
  else if (age < 18)
    cout << "You are a teenager." << endl;
  else
    cout << "You are old." << endl;
}