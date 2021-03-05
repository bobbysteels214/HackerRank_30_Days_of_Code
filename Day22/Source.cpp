#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

class Node {
public:
  int data;
  Node *left;
  Node *right;
  Node(int d) {
    data = d;
    left = NULL;
    right = NULL;
  }
};
class Solution {
public:
  Node * insert(Node* root, int data) {
    if (root == NULL) {
      return new Node(data);
    }
    else {
      Node* cur;
      if (data <= root->data) {
        cur = insert(root->left, data);
        root->left = cur;
      }
      else {
        cur = insert(root->right, data);
        root->right = cur;
      }

      return root;
    }
  }

  int getHeight(Node* root) {
    //Write your code here
    if (root)
      return 1 + std::max(getHeight(root->left), getHeight(root->right));
    else
      return -1;
  }

  void traverseInOrder(Node* root)
  {
    if (root) {
      traverseInOrder(root->left);
      cout << root->data << " ";
      traverseInOrder(root->right);
    }
  }
}; //End of Solution

int main() {
  /* Redirecting cin to input file */
  std::ifstream in("input.txt");
  std::streambuf *cinbuf = std::cin.rdbuf(); //save old buf
  std::cin.rdbuf(in.rdbuf()); //redirect std::cin to input.txt!

  Solution myTree;
  Node* root = NULL;
  int t;
  int data;

  cin >> t;

  while (t-- > 0) {
    cin >> data;
    root = myTree.insert(root, data);
  }
  int height = myTree.getHeight(root);
  cout << height << endl;;

  system("pause");
  return 0;
}
