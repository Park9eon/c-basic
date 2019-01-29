//
// Created by Park Geon on 2019-01-29.
//

#include <stdio.h>

void updatePoint(int *p) {
    *p = 10;
}

void updateValue(int v) {
    v = 10;
}

int main() {
    int a = 1;
    int *b = &a;

    printf("a is %d\n", a);
    printf("b is %p\n", b);
    printf("*b is %d\n", *b);

    updateValue(a);
    printf("a is %d\n", a);
    updatePoint(&a);
    printf("a is %d\n", a);
    return 1;
}