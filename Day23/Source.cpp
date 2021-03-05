#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>
#include <fstream>
#include <queue>

using namespace std;
class Node {
public:
  int data;
  Node *left, *right;
  Node(int d) {
    data = d;
    left = right = NULL;
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
  void traverseInOrder(Node* root)
  {
    if (root) {
      traverseInOrder(root->left);
      cout << root->data << " ";
      traverseInOrder(root->right);
    }
  }

  void levelOrder(Node * root) {
    //Write your code here
    queue<Node*> q;

    q.push(root);
    Node *cur;

    while (!q.empty()) {
      cur = q.front();
      cout << cur->data << " ";

      if (cur->left)
        q.push(cur->left);
      if (cur->right)
        q.push(cur->right);
      q.pop();
    }
  }

};//End of Solution
int main() {
  /* Redirecting cin to input file */
  std::ifstream in("input.txt");
  std::streambuf *cinbuf = std::cin.rdbuf(); //save old buf
  std::cin.rdbuf(in.rdbuf()); //redirect std::cin to input.txt!

  Solution myTree;
  Node* root = NULL;
  int T, data;
  cin >> T;
  while (T-->0) {
    cin >> data;
    root = myTree.insert(root, data);
  }
  myTree.levelOrder(root);

  cout << endl;
  system("pause");
  return 0;
}