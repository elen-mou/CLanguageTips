/*
Prints a binary tree on the terminal (incomplete).
Current output:
 50 
 30  70 
 20  40  60  80

 Desired output:
       50 
   30      70 
 20  40  60  80
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Definition of a Tree Node
struct TreeNode {
    int data;                      // Data stored in the node
    struct TreeNode* left;         // Pointer to the left child
    struct TreeNode* right;        // Pointer to the right child
};

// Function to create a new tree node
struct TreeNode* createNode(int data) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    if (!newNode) {
        printf("Memory allocation failed\n");
        return NULL;
    }
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct TreeNode* insertNode(struct TreeNode* root, int data) {
    if (root == NULL) {
        return createNode(data);
    }
    if (data < root->data) {
        root->left = insertNode(root->left, data);
    } else if (data > root->data) {
        root->right = insertNode(root->right, data);
    }
    return root;
}

// Helper function to print tree levels
void printTreeLevel(struct TreeNode* root, int level) {
    if (root == NULL) {
        printf("    "); // Indentation for empty nodes
        return;
    }
    if (level == 1) {
        printf("%3d ", root->data);
    } else if (level > 1) {
        printTreeLevel(root->left, level - 1);
        printTreeLevel(root->right, level - 1);
    }
}

// Function to calculate height of the tree
int treeHeight(struct TreeNode* root) {
    if (root == NULL) {
        return 0;
    }
    int leftHeight = treeHeight(root->left);
    int rightHeight = treeHeight(root->right);
    return (leftHeight > rightHeight ? leftHeight : rightHeight) + 1;
}

// Function to print the tree
void printTree(struct TreeNode* root) {
    int h = treeHeight(root);
    for (int i = 1; i <= h; i++) {
        printTreeLevel(root, i);
        printf("\n");
    }
}

void inorderTraversal(struct TreeNode* root) {
    if (root == NULL) {
        return;
    }
    inorderTraversal(root->left);
    printf("%d ", root->data);
    inorderTraversal(root->right);
}


int main() {
    struct TreeNode* root = NULL;

    // Insert nodes into the binary search tree
    root = insertNode(root, 50);
    insertNode(root, 30);
    insertNode(root, 20);
    insertNode(root, 40);
    insertNode(root, 70);
    insertNode(root, 60);
    insertNode(root, 80);

    printf("Tree Structure:\n");
    printTree(root);

    return 0;
}
