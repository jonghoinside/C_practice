//
// Created by ajh07 on 2021-06-05.
//
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int up(const int * a, const int * b) {
    if (*a > *b)
        return 1;
    else
        return 0;
}

int down(const int * a, const int * b) {
    if (*a > *b)
        return 0;
    else
        return 1;
}

// A_len은 배열 A의 길이입니다.
// B_len은 배열 B의 길이입니다.
int solution(int *A, size_t A_len, int *B, size_t B_len) {

    qsort(A, A_len, sizeof(int), up);
    qsort(B, B_len, sizeof(int), down);

    int answer = 0;
    for (int i = 0; i < A_len; ++i)
        answer += A[i] * B[i];

    return answer;
}