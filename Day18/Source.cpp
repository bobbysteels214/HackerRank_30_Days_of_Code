#include <iostream>
#include <string>
#include <stack>
#include <queue>

using namespace std;

class Solution {
private:
  stack<char> stack_;
  queue<char> queue_;

public:
  void pushCharacter(char c) { stack_.push(c); }
  void enqueueCharacter(char c) { queue_.push(c); }
  
  char popCharacter(void) {
    char c('\0');
    if (!stack_.empty()) {
      c = stack_.top();
      stack_.pop();
    }

    return c;
  }
  char dequeueCharacter(void) {
    char c('\0');
    if (!queue_.empty()) {
      c = queue_.front();
      queue_.pop();
    }

    return c;
  }
};

int main() {
  // read the string s.
  string s;
  getline(cin, s);

  // create the Solution class object p.
  Solution obj;

  // push/enqueue all the characters of string s to stack.
  for (int i = 0; i < s.length(); i++) {
    obj.pushCharacter(s[i]);
    obj.enqueueCharacter(s[i]);
  }

  bool isPalindrome = true;

  // pop the top character from stack.
  // dequeue the first character from queue.
  // compare both the characters.
  for (int i = 0; i < s.length() / 2; i++) {
    if (obj.popCharacter() != obj.dequeueCharacter()) {
      isPalindrome = false;

      break;
    }
  }

  // finally print whether string s is palindrome or not.
  if (isPalindrome) {
    cout << "The word, " << s << ", is a palindrome.";
  }
  else {
    cout << "The word, " << s << ", is not a palindrome.";
  }

  system("pause");
  return 0;
}