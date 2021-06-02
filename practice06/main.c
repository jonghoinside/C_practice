//
// Created by user on 2021-06-02.
//

#include <stdio.h>
#include <math.h>

int isPrimeNumber(int num);

int solution(int nums[], size_t nums_len);

int main(void) {
    int testNum1[4] {1,2,3,4};
    int testNum2[5] {1,2,7,6,4};

    printf("test1 result is %d\n", solution(testNum1, 4));
    printf("test2 result is %d\n", solution(testNum2, 5));

    return 0;
}