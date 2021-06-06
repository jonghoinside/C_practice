//
// Created by ajh07 on 2021-06-03.
//
#include <stdio.h>

int solution(int arr[], size_t arr_len);

int main(void) {
    int arr1[4] = {2, 6, 8, 14};
    int arr2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr3[4] = {3, 4, 9, 16};
    int arr4[5] = {18, 36, 54, 72, 90};
    int arr5[6] = {12, 15, 21, 4, 10, 42};
    int arr6[5] = {14, 7, 14, 7, 49};


    printf("test 1 answer : %d\n", solution(arr1, 4));
    printf("test 2 answer : %d\n", solution(arr2, 10));
    printf("test 3 answer : %d\n", solution(arr3, 4));
    printf("test 4 answer : %d\n", solution(arr4, 5));
    printf("test 5 answer : %d\n", solution(arr5, 6));
    printf("test 6 answer : %d\n", solution(arr6, 5));

    return 0;
}