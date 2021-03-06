#include <iostream>
#include <fstream>


using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node(int d) {
    data = d;
    next = NULL;
  }
};
class Solution {
public:

  // input is in non-decreasing order
  Node * removeDuplicates(Node *head)
  {
    if (!head)
      return head;

    Node* current = head;
    Node* next_next;

    while (current->next) {
      if (current->data == current->next->data) {
        next_next = current->next->next;
        free(current->next);
        current->next = next_next;
      }
      else
        current = current->next;
    }

    return head;
  }

  Node* insert(Node *head, int data)
  {
    Node* p = new Node(data);
    if (head == NULL) {
      head = p;

    }
    else if (head->next == NULL) {
      head->next = p;

    }
    else {
      Node *start = head;
      while (start->next != NULL) {
        start = start->next;
      }
      start->next = p;

    }
    return head;


  }
  void display(Node *head)
  {
    Node *start = head;
    while (start)
    {
      cout << start->data << " ";
      start = start->next;
    }
  }
};

int main()
{
  /* Redirecting cin to input file */
  std::ifstream in("input.txt");
  std::streambuf *cinbuf = std::cin.rdbuf(); //save old buf
  std::cin.rdbuf(in.rdbuf()); //redirect std::cin to input.txt!

  Node* head = NULL;
  Solution mylist;
  int T, data;
  cin >> T;
  while (T-->0) {
    cin >> data;
    head = mylist.insert(head, data);
  }
  head = mylist.removeDuplicates(head);

  mylist.display(head);

  cout << endl;
  system("pause");
}