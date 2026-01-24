#include <iostream>
using namespace std;

class TreeNode {
public:
  int val;
  TreeNode *left;
  TreeNode *right;

  // now making the constructor dude
  TreeNode(int val) {
    this->val = val;
    this->left = NULL;
    this->right = NULL;
  }
};

// function for display
void display(TreeNode *root) {

  if (root == NULL)
    return;
  cout << root->val << " \n";
  display(root->left);
  display(root->right);
}

// function for product dude
long long productFun(TreeNode *root) {

  if (root == NULL)
    return 1;
  int leftProduct = productFun(root->left);
  int rightProduct = productFun(root->right);
  return root->val * leftProduct * rightProduct;
}

int main() {
  cout << "Now making the tree node dude ";
  TreeNode *n1 = new TreeNode(1);
  TreeNode *n2 = new TreeNode(2);
  TreeNode *n3 = new TreeNode(3);
  TreeNode *n54 = new TreeNode(54);
  TreeNode *n89 = new TreeNode(89);
  TreeNode *n9 = new TreeNode(9);
  TreeNode *n22 = new TreeNode(22);
  TreeNode *n32 = new TreeNode(32);
  TreeNode *n45 = new TreeNode(45);
  TreeNode *n76 = new TreeNode(76);
  TreeNode *n87 = new TreeNode(87);
  TreeNode *n989 = new TreeNode(989);
  TreeNode *n132 = new TreeNode(132);

  // TREE STRUCTURE
  //             1
  //          /     \
  //        2         3
  //      /   \     /   \
  //    54    89   9    22
  //   / \    /
  // 32  45  76
  //       \
  //        87
  //            \
  //             989
  //            /
  //          132

  // now connection code  !!

  TreeNode *root = n1;

  n1->left = n2;
  n1->right = n3;

  n2->left = n54;
  n2->right = n89;

  n3->left = n9;
  n3->right = n22;

  n54->left = n32;
  n54->right = n45;

  n45->right = n87;

  n89->left = n76;

  n87->right = n989;
  n989->left = n132;
  display(root);
  cout << "\n";
  cout << "The product of all the node is this :)  ";
  cout << productFun(root);
}