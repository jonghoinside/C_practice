//
// Created by ajh07 on 2021-06-06.
//
#include <stdio.h>

char* solution(int numbers[], size_t numbers_len);

int main(void) {
    int num1[3] = {6, 10, 2};
    int num2[5] = {3, 30, 34, 5, 9};
    int num3[3] = {0, 0, 0};

    printf("%s\n", solution(num1, 3));
    printf("%s\n", solution(num2, 5));
    printf("%s\n", solution(num3, 3));
    return 0;
}