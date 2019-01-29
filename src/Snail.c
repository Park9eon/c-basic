//
// Created by Park Geon on 2019-01-29.
//

#include <stdio.h>

int getValue(int i, int j, int N, int M) {
    if (i == 0) {
        return j + 1 + M;
    }
    if (j == 0) {
        return 4 * N - 3 - i + M;
    }
    if (i + 1 == N) {
        return 3 * N - 2 - j + M;
    }
    if (j + 1 == N) {
        return N + i + M;
    }
    return getValue(i - 1, j - 1, N - 2, M + 4 * N - 4);
}

// 달팽이 프린트
int main() {
    // 만약 N이 4일 때
    // 1  2  3  4
    // 12 13 14 5
    // 11 16 15 6
    // 10 9  8  7
    //(0, 0)(0, 1)(0, 2)(0, 3)
    //(1, 0)(1, 1)(1, 2)(1, 3)
    //(2, 0)(2, 1)(2, 2)(2, 3)
    //(3, 0)(3, 1)(3, 2)(3, 3)

    int N = 9;
    for (int i = 0 ; i < N ; i++) {
        for (int j = 0 ; j < N ; j++) {
            printf("%2d ", getValue(i, j, N, 0));
        }
        printf("\n");
    }
    return 1;
}