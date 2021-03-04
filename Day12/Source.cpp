#include <iostream>
#include <vector>
#include <string>
#include <numeric>

using namespace std;


class Person {
protected:
  string firstName;
  string lastName;
  int id;
public:
  Person(string firstName, string lastName, int identification) {
    this->firstName = firstName;
    this->lastName = lastName;
    this->id = identification;
  }
  void printPerson() {
    cout << "Name: " << lastName << ", " << firstName << "\nID: " << id << "\n";
  }

};

class Student : public Person {
private:
  vector<int> testScores;
public:
  /*
  *   Class Constructor
  *
  *   Parameters:
  *   firstName - A string denoting the Person's first name.
  *   lastName - A string denoting the Person's last name.
  *   id - An integer denoting the Person's ID number.
  *   scores - An array of integers denoting the Person's test scores.
  */
  // Write your constructor here
  //Student(string firstName, string lastName, int id, );
  Student(string firstName, string lastName, int identification, vector<int> scores) : Person(firstName, lastName, identification)
  {
    testScores = scores;
  }

  /*
  *   Function Name: calculate
  *   Return: A character denoting the grade.
  */
  // Write your function here
  char calculate(void);
};

int main() {

  string firstName;
  string lastName;
  int id;
  int numScores;
  cin >> firstName >> lastName >> id >> numScores;
  vector<int> scores;
  for (int i = 0; i < numScores; i++) {
    int tmpScore;
    cin >> tmpScore;
    scores.push_back(tmpScore);
  }
  Student* s = new Student(firstName, lastName, id, scores);
  s->printPerson();
  cout << "Grade: " << s->calculate() << "\n";

  system("pause");
  return 0;
}


char Student::calculate(void)
{
  double avg = 0;
  if (testScores.size() != 0) {
    avg = accumulate(testScores.begin(), testScores.end(), 0.0) / testScores.size();
  }
  if (avg >= 90)
    return 'O';
  else if (avg >= 80)
    return 'E';
  else if (avg >= 70)
    return 'A';
  else if (avg >= 55)
    return 'P';
  else if (avg >= 40)
    return 'D';
  else
    return 'T';
}