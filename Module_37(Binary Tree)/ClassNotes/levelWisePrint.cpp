#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    // making constructor for putting the default value when the node is created !!!
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void displayTree(Node *root)
{
    // base case !!!
    if (root == NULL)
        return;
    cout << root->val << " ";
    displayTree(root->left);
    displayTree(root->right);
}

// function to print the tree's desire   level  dude !!!
void desireLevelDisplay(Node *root, int desireLevel, int currLevel)
{
    if (root == NULL)
        return;
    if (desireLevel == currLevel)
    {
        cout << root->val << " ";
        return;
    }
    desireLevelDisplay(root->left, desireLevel, currLevel + 1);
    desireLevelDisplay(root->right, desireLevel, currLevel + 1);
}

int levels(Node *root)
{
    if (root == NULL)
        return 0;
    return 1 + max(levels(root->left), levels(root->right));
}

void allLevelDisplay(Node *root, int currLevel, int desireLevel)
{
    if (root == NULL)
        return;

    if (currLevel == desireLevel)
    {
        cout << root->val << " ";
        return;
    }
    allLevelDisplay(root->left, currLevel + 1, desireLevel);
    allLevelDisplay(root->right, currLevel + 1, desireLevel);
}
int main()
{
    // now create the node for that !!
    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);
    Node *f = new Node(6);
    Node *g = new Node(7);

    // now making the connections brother !!!
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    displayTree(a);
    cout << endl;
    cout << "desire level display " << endl;
    int desireLevel = 1;
    cout << "enter the branch you want to print :) ";
    cin >> desireLevel;
    desireLevelDisplay(a, desireLevel, 1);
    cout << endl;
    // level wise print dude !!!

    int i = 1;
    int n = levels(a);
    cout << endl;
    while (n >= i)
    {
        allLevelDisplay(a, 1, i);
        i++;
        cout << endl;
    }
}
