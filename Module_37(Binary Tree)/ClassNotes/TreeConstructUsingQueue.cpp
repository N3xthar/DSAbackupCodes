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

void levelOrderqueue(Node *root)
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

int main()
{
    int arr[] = {1, 2, 3, 4, 5, INT_MIN, 6, INT_MIN, INT_MIN, 7, 8, 9};
    int n = sizeof arr / sizeof arr[0];

    Node* root =  TreeConstructUsingQueue(arr, n);
    levelOrderqueue(root);
}
