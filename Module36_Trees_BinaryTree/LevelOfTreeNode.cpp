
#include <climits>

#include <iostream>
using namespace std;
class TreeNode
{
public:
    int value;
    TreeNode *left;
    TreeNode *right;

    // now make the constructor to take the input
    TreeNode(int val)
    {
        this->value = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// now make a node for display the tree node brother !!!
void display(TreeNode *root)
{
    if (root == NULL)
        return;
    cout << root->value << " ";
    display(root->left);
    display(root->right);
}
// code for finding the maximum element brother !!!!!

int TreeMax(TreeNode *root)
{
    if (root == NULL)
        return INT_MIN;
    int leftMax = TreeMax(root->left);
    int rightMax = TreeMax(root->right);
    return max(root->value, max(leftMax, rightMax));
}

// function for number of tree levels
int levelsTreeNode(TreeNode *root)
{
    if (root == NULL)
        return 0;
    return 1 + max(levelsTreeNode(root->left), levelsTreeNode(root->right));
}
int main()
{

    TreeNode *a = new TreeNode(1);
    TreeNode *b = new TreeNode(1);
    TreeNode *c = new TreeNode(1);
    TreeNode *d = new TreeNode(1);
    TreeNode *e = new TreeNode(99);
    TreeNode *f = new TreeNode(1);
    TreeNode *g = new TreeNode(1);
    // now linking the tree node brother !!!
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    // now display the node
    display(a);
    cout << endl;
    cout << "+============================+";
    cout << "The maximum element is nigga_\n ";
    int maxValue = TreeMax(a);
    cout << maxValue;
    cout << "======================";
    cout << "\n Levels in tree node !! :) ";
    int levels = levelsTreeNode(a);
    cout << levels;
}