//
// Created by ajh07 on 2021-06-03.
//
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int getNum(int a, int b) {
    int remain;
    int i = a;
    int j = b;
    while(remain = a%b) {
        a = b;
        b = remain;
    }
    return i*j/b;
}

// arr_len은 배열 arr의 길이입니다.
int solution(int *arr, size_t arr_len) {

    int i = 0;
    int answer = arr[i];
    while (i < arr_len-1) {
        answer = getNum(answer, arr[i+1]);
        ++i;
    }

    return answer;
}