// Basic tree functions.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct treenode {
    int value;
    struct treenode *left;
    struct treenode *right;
} * Tree;

int is_empty(Tree t) {
    return t == NULL;
}

int depth(Tree t) {
    if (t == NULL) return -1;
    int left_depth = depth(t->left);
    int right_depth = depth(t->right);
    return 1 + ((left_depth > right_depth) ? left_depth : right_depth);
}

int main() {
    // is_empty
    // Tree t = NULL;
    // printf("Empty: %d\n", is_empty(t));

    // depth
    // struct treenode t2 = {2, NULL, NULL}, t9 = {9, NULL, NULL}, t1 = {1, NULL, NULL};
    // struct treenode t7 = {7, &t2, &t9}; struct treenode t5 = {5, &t7, &t1};
    // Tree t = &t5;
    // printf("Depth: %d\n", depth(t));

    return 0;
}
