#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int value;
    struct node* left;
    struct node* right;
    int height;
} Node;

typedef struct BST{
    Node* root;
} BST;

BST* createBST();

Node *newNode(int value);

void traverse_in_order(Node *node);

void insertion(BST *bst, Node* node);

int search(BST *bst, int key);

Node *predecessor(Node *node);

Node *successor(Node *node);

void deletion(BST *bst, Node *node);