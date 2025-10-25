

#include <iostream>
using namespace std;
// making the class for making  the tree node brother !!!
class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    // making the constructor for recieve the value for that !!
    TreeNode(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// function for display the node of the tree !!
void display(TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->val<<" ";

    display(root->left);
    display(root->right);
}
// function for calculating the size for that!!

int size (TreeNode*root){
   
    if (root == NULL) return  0  ;
    int count  = 1 + size(root->left)+ size(root->right) ;
    return count ;



}
int main()
{
    TreeNode *a = new TreeNode(1);
    TreeNode *b = new TreeNode(1);
    TreeNode *c = new TreeNode(1);
    TreeNode *d = new TreeNode(1);
    TreeNode *e = new TreeNode(1);
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
    cout<<endl;
    cout<<"The total number of node in the tree is "<<size(a);

}