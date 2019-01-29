//
// Created by Park Geon on 2019-01-29.
//

#include <stdio.h>

int main() {
    int a = 1;
    int *b = &a;
    int **c = &b;
    int d = 2;

    printf("a is %d\n", a);
    printf("b is %p\n", b);
    printf("c is %p\n", c);
    printf("*b is %d\n", *b);
    printf("**c is %d\n", **c);
    printf("----\n");
    printf("d is %d\n", d);
    b = &d;
    printf("*b is %d\n", *b);
    printf("**c is %d\n", **c);
    return 1;
}