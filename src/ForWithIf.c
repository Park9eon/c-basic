//
// Created by Park Geon on 2019-01-28.
//

#include <stdio.h>

int main() {
    for (int i = 0 ; i < 10 ; i++) {
        if (i % 2 == 0) {
            // 짝수라면
            printf("%d는 짝수입니다.\n", i);
        } else {
            printf("%d는 홀수입니다.\n", i);
        }
    }
}