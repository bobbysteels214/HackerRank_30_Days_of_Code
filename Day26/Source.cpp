#include <cmath>
#include <iostream>
#include <fstream>
using namespace std;

struct Date
{
  size_t D;
  size_t M;
  size_t Y;
};

class LibraryFees
{
private:
  size_t fee;


public:
  LibraryFees() { fee = 0; }
  size_t calcFee(const Date& dueDate, const Date& returnDate)
  {
    if (returnDate.Y > dueDate.Y)
      return 10000;
    else if (returnDate.Y < dueDate.Y)
      return 0;
    else if (returnDate.M > dueDate.M)
      return 500 * (returnDate.M - dueDate.M);
    else if (returnDate.M < dueDate.M)
      return 0;
    else if (returnDate.M == dueDate.M && returnDate.D > dueDate.D)
      return 15 * (returnDate.D - dueDate.D);
    else
      return 0;
  }
};


int main() {
  /* Redirecting cin to input file */
  std::ifstream in("input.txt");
  std::streambuf *cinbuf = std::cin.rdbuf(); //save old buf
  std::cin.rdbuf(in.rdbuf()); //redirect std::cin to input.txt!

  Date dueDate, returnDate;
  LibraryFees fee;

  cin >> returnDate.D >> returnDate.M >> returnDate.Y;
  cin >> dueDate.D >> dueDate.M >> dueDate.Y;

  cout << fee.calcFee(dueDate, returnDate) << endl;

  system("pause");
  return 0;
}
