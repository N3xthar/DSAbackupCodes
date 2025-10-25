#include <iostream>

// making the Binary tree !!!

class TreeNode
{

public:
    int val;
    TreeNode *left;
    TreeNode *right;

    // making the constructor !!
    TreeNode(int val)
    {
        this->val = val;

        // assigning the null value to the left and the right constructor !!
        this->left = NULL;
        this->right = NULL;
    }
};

using namespace std;

// function for displaying the TreeNode using the root node brother !!

void display(TreeNode *root)
{ // here is the base case for that
    if (root == NULL)
        return;

    cout << root->val << " ";
    display(root->left);
    display(root->right);
}

// function for calculating the sum for that !!!

int TreeNodeSum(TreeNode *root)
{
    int sum = 0;
    if (root == NULL)
        return 0;
    // call leftsumtree for calculating  the sum !!
    int leftSum = TreeNodeSum(root->left);
    int rightSum = TreeNodeSum(root->right);
    int answer = leftSum + rightSum+ root->val;
    return answer;
}
int main()
{
    // now making the trees from the scratch !!!
    TreeNode *a = new TreeNode(15);
    TreeNode *b = new TreeNode(11);
    TreeNode *c = new TreeNode(111);
    TreeNode *d = new TreeNode(14);
    TreeNode *e = new TreeNode(10);
    TreeNode *f = new TreeNode(178);
    TreeNode *g = new TreeNode(98);

    // now linking the element of the tree Brother !!
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    // now making the function call for the
    display(a);

    // now calling the function
    cout << endl
         << TreeNodeSum(a);
}