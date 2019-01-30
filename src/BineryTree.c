//
// Created by Park Geon on 2019-01-30.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    struct Node *left;
    struct Node *right;
    char data;
} Node;

Node *createNode() {
    return malloc(sizeof(Node));
}

void order(Node *node) {
    printf("Data is : %c\n", node -> data);
    if (node -> left != NULL) order(node -> left);
    if (node -> right != NULL) order(node -> right);
}

int main() {
    Node *head = createNode();
    head -> data = 'F';

    head -> left = createNode();
    head -> left -> data = 'B';
    head -> left -> left = createNode();
    head -> left -> left -> data = 'A';
    head -> left -> right = createNode();
    head -> left -> right -> data = 'D';
    head -> left -> right -> left = createNode();
    head -> left -> right -> left -> data = 'C';
    head -> left -> right -> right = createNode();
    head -> left -> right -> right -> data = 'E';
    head -> right = createNode();
    head -> right -> data = 'G';
    head -> right -> right = createNode();
    head -> right -> right -> data = 'I';
    head -> right -> right -> left = createNode();
    head -> right -> right -> left -> data = 'H';

    order(head);
    return 1;
}