#include <iostream>
#include <queue>
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
        if (temp->left !=NULL) q.push(temp->left);
        if (temp->right!=NULL) q.push(temp->right);

    }
    cout<<endl;
    
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
    // now i am displaying the tree using  the bfs tc O(n);

    levelOrderqueue(a);
}
