#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node 
{
        int key;
        struct node *left_child = NULL;
        struct node *right_child = NULL;
} NODE;


typedef struct tree 
{
        NODE root;
        int height = 0;
} TREE;

void insert(NODE node, int key) 
{
        if (key < node.key) {
                if (*node.left_child != NULL) {
                        insert(*node.left_child, key);
                } else {
                        NODE new_node;
                        node.left_child         = malloc(sizeof(new_node));
                        (node->left_child).key  = key; 
                }
        else {
                if (*node.right_child != NULL) {
                        insert(*node.right_child, key);
                } else {
                        NODE new_node;
                        node.right_child        = malloc(sizeof(new_node));
                        (node->right_child).key = key; 
                }
        }
}

void print_tree(TREE tree)
{
        int canvas_width = 2 ** tree.height - 1;

        while (true) {
                
        }
}

int main()
{
        NODE node1, *p1, node2;

        return 0;
}

