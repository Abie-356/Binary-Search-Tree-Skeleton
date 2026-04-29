# 🌲 Binary Search Tree (BST) in C

Welcome to my Binary Search Tree implementation! This repository contains a clean, straightforward, and fully functional BST written in C. Whether you're here to brush up on data structures, review my code, or use it as a reference for your own projects, you'll find everything you need right here.

## 🚀 Features

This implementation handles memory management and covers all the fundamental operations required for a standard Binary Search Tree:

* **Dynamic Creation:** Initialize new trees and nodes on the fly.
* **Insertion:** Add new values iteratively while maintaining the strict left-to-right BST property.
* **Searching:** Quickly check if a specific value exists within the tree.
* **In-Order Traversal:** Print the contents of the tree in a sorted, ascending order.
* **Deletion:** Safely remove nodes. The logic automatically handles the three classic BST deletion scenarios: leaf nodes, nodes with one child, and complex nodes with two children.
* **Successor & Predecessor:** Easily find the next largest or next smallest node relative to a given point.

---

## 🛠️ Functions Overview

Here is a quick look under the hood at the functions provided in `bst.c` (defined in `bst.h`):

### Core Setup
* `new_bst()`: Allocates memory for a brand new, empty tree and returns a pointer to it.
* `new_node(int value)`: Creates a fresh node with your specified value, setting its left and right children to `NULL`.

### Tree Operations
* `insertion(BST *bst, Node* node)`: Iteratively traverses the tree to find the perfect spot for your new node, ensuring left children are smaller and right children are larger.
* `search(BST *bst, int key)`: Scans the tree for your target `key`. Returns `1` if found, and `0` if it isn't in the tree.
* `deletion(BST *bst, Node *node)`: The heavy lifter. It carefully removes a node while seamlessly reconnecting the remaining branches so the tree structure remains intact. 
* `traverse_in_order(Node *node)`: Recursively visits the left branch, the current node, and then the right branch. Perfect for fetching your data in sorted order.

### Helper Functions
* `predecessor(Node *node)`: Finds the maximum value in the left subtree (the largest value that is still strictly smaller than the current node).
* `successor(Node *node)`: Finds the minimum value in the right subtree (the smallest value that is strictly larger than the current node).

---

## 💻 How to Use

To compile and run this code, you will need a C compiler (like GCC) and a `main.c` file to drive and test the functions. 

1. Ensure you have `bst.h`, `bst.c`, and your `main.c` file in the same directory.
2. Compile the files together using your terminal:
   ```bash
   gcc bst.c

3 Run your executable:

   *./bst_program*
