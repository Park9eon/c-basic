//
// Created by Park Geon on 2019-01-30.
//

#include <stdio.h>

typedef struct {
    char name[20];
} User;

int main() {
    User user = { .name = "name" };
    printf("User name is %s", user.name);
    return 1;
}