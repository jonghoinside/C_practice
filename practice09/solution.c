//
// Created by ajh07 on 2021-06-03.
//
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int solution(int *arr, size_t arr_len) {
    int * tmp = (int*)malloc(sizeof(int) * arr_len);
    for(int i = 0; i < arr_len; ++i) {
        if(arr[i] == 0)
            return 0;
        tmp[i] = arr[i];
    }

    for(int i = 0; i < arr_len; ++i) {
        for(int j = 0; j < arr_len; ++j) {
            if(i != j && arr[j]%arr[i] == 0 && tmp[j]%tmp[i] == 0)
                tmp[j] = tmp[j]/tmp[i];
        }
    }

    int answer = 1;
    for(int i = 0; i < arr_len; ++i)
        answer *= tmp[i];

    return answer;
}