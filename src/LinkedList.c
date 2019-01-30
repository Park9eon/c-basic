//
// Created by Park Geon on 2019-01-30.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    struct Node *next;
    int data;
} Node;

int main() {
    Node *head = malloc(sizeof(Node));
    head -> data = -1;
    head -> next = NULL;

    Node *node = head;
    for (int i = 0 ; i < 100 ; i++) {
        node -> next = malloc(sizeof(Node));
        node -> next -> data = i;
        node -> next -> next = NULL;
        node = node -> next;
    }

    Node *current = head;
    while (1) {
        printf("Current node -> data : %d\n", current -> data);
        if (current -> next == NULL) {
            break;
        }
        current = current -> next;
    }

    return 1;
}