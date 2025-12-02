#include <iostream>
#include <queue>
#include <limits.h>
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
Node *TreeConstructUsingQueue(int arr[], int n)
{
    if (n == 0)
        return NULL;

    queue<Node *> q;
    Node *root = new Node(arr[0]);
    q.push(root);
    int i = 1;
    int j = 2;

    while (!q.empty() && i < n)
    {
        Node *temp = q.front();
        q.pop();

        Node *l = NULL;
        Node *r = NULL;

        if (i < n && arr[i] != INT_MIN)
            l = new Node(arr[i]);
        if (j < n && arr[j] != INT_MIN)
            r = new Node(arr[j]);

        temp->left = l;
        temp->right = r;

        if (l != NULL)
            q.push(l);
        if (r != NULL)
            q.push(r);

        i += 2;
        j += 2;
    }

    return root;
}
// this function is used to print the tree level wise !!!!

void levelOrderqueuedisplay(Node *root)
{
    // make a queue
    queue<Node *> q;
    // push the root
    q.push(root);
    // run the loop until the queue become empty brother !!!
    while (q.size() > 0)
    {
        Node *temp = q.front();
        q.pop();

        // now display the value of queue dude
        cout << temp->val << " ";

        // now move the let and right node of the temp into the queue
        if (temp->left != NULL)
            q.push(temp->left);
        if (temp->right != NULL)
            q.push(temp->right);
    }
    cout << endl;
}

// function for printing the left boundaries dude !!!

void leftBoundary(Node *root)
{

    // we are doing the preorder traversal for printing value
    if (root == NULL)
        return;

    // if the current node is the leaf node than return the function brother
    if (root->left == NULL && root->right == NULL)
        return;

    // now display the value
    cout << root->val << " ";

    // left call
    leftBoundary(root->left);
    // jab left node null  ho jae than call right one brother !!
    if (root->left == NULL)
        leftBoundary(root->right);
}

// function for display the root node brother !!
void bottomBoundary(Node *root)
{
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
        cout << root->val << " ";

    // call the left node and the right half brother
    bottomBoundary(root->left);
    bottomBoundary(root->right);
}

// function for printing the right node in reverse order dude !!
void rightNodeReverse(Node *root)
{
    if (root == NULL)
        return;

    // root node ko bhi avoid karo
    if (root->left == NULL && root->right == NULL)
        return;

    // call the right node
    rightNodeReverse(root->right);
    // call the left node only one the right node become null
    rightNodeReverse(root->left);
    // printing node brother !!
    cout << root->val << " ";
}

// function to merge all the boundary printing brother !! 
void boundaryPrint(Node* root){
    leftBoundary(root);
    bottomBoundary(root);
    rightNodeReverse(root);

}
int main()
{
 int arr[] = {
  1,
  2,3,
  4,5,6,7,
  8,9,10,11,12,13,14,15,
  16,INT_MIN,17,18,INT_MIN,19,INT_MIN,20,21,22,INT_MIN,23,24,INT_MIN,25,
  INT_MIN,26,27,28,29,INT_MIN,30,31,32,INT_MIN,33,34,35,INT_MIN,36,37,

  38,INT_MIN,INT_MIN,39,40,41,INT_MIN,42,
  43,INT_MIN,44,45,INT_MIN,46,INT_MIN,47,
  48,49,50,INT_MIN,51,52,INT_MIN,53,
  54,INT_MIN,55,56,57,INT_MIN,58,59,
  60,61,INT_MIN,62,63,INT_MIN,64,65,

  66,INT_MIN,INT_MIN,67,68,69,INT_MIN,70,
  INT_MIN,71,72,INT_MIN,73,INT_MIN,74,75
};

    int n = sizeof arr / sizeof arr[0];

    Node *root = TreeConstructUsingQueue(arr, n);
    levelOrderqueuedisplay(root);





    cout<<"\n";
    cout<<"Boundary printing \n";
    boundaryPrint(root);
}
