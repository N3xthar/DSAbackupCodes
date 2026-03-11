#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  Node *left;
  Node *right;
}

// creation of node
struct Node *CreateNode(int value) {
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  newNode->data = value;
  newNode->left = NULL;
  newNode->right = NULL;
  return newNode;
}

// function for creating Tree  Dude
struct Node *CreateTree() {
  int data;
  printf("-1 when you dont need the further  tree");
  scanf("%d", &data);
  // adding the check point dude
  if (data == -1) {
    return NULL;
  }
  struct Node *root = CreateNode(data);
  printf("Enter the left child data %d", &data);
  root->left = CreateTree();
  printf("Enter the right child data %d", &data);
  root->right = CreateTree();
  return root;
}

// inorder Traversal Dude
void inorder(struct Node *root) {
  // making stack of pointer data type
  struct Node *stack[100];
  int top = -1;
  struct Node *curr = root;
  while (curr != NULL || top != -1) {
    // pushing all left side node dude
    while (curr != NULL) {
      top++;
      stack[top] = curr;
      curr = curr->left;
    }
    // pop and print dude
    curr = stack[top];
    top--;
    printf("%d", curr->data);
    curr = curr->right;
  }
}

// preorder dude
void preorder(struct Node *root) {
  // make the data type dude ;
  struct Node *stack[100];
  int top = -1;
  if (root == NULL) {
    return;
  }
  top++;
  stack[top] = root;
  while (top != -1) {
    struct Node *curr = stack[top];
    top--;
    // do the work dude
    printf("%d", curr->data);
    // stack is last in , first out
    // so push right and left last so that we can access  left first dude
    if (curr->right) {
      top++;
      stack[top] = curr->right;
    }
    if (curr->left) {
      top++;
      stack[top] = curr->left;
    }
  }
}
// post order dude
void postOrder(struct Node *root) {
  // making the pointer type stack data type dude
  struct Node *stack[100];
  // for acting as a index dude
  int top = -1;
  if (root == NULL)
    return;
  top++;
   // stack is last in , first out
    // so push left and right last so that we can access  left right dude
    
 
}

int main() {
  struct Node *root = NULL;
  printf("Creation of Binary Tree \n");
  root = CreateTree();
}