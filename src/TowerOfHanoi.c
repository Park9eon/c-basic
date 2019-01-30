//
// Created by Park Geon on 2019-01-30.
//

#include <stdio.h>
#include <stdlib.h>

// 위키펌
void move(int from, int to) {
    printf("\nMove from %d to %d", from, to);
}

void hanoi(int n, int from, int by, int to) {
    if (n == 1)
        move(from, to);
    else {
        hanoi(n - 1, from, to, by);
        move(from, to);
        hanoi(n - 1, by, from, to);
    }
}

int main() {
    hanoi(10, 1, 2, 3);
    return 1;
}