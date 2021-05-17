#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int* nums = (int*)malloc(sizeof(int));
    int portion = 0;
    int rest = 0;
    int i;

    for (i = 0 ; n >= 3 ; ++i) {
        portion = n / 3;
        rest = n % 3;

        printf("portion : %d, rest : %d\n", portion, rest);
        nums[i] = rest;
        n = portion;
    }
    nums[i] = (portion == 0) ? n : portion;
    printf("nums[i] : %d\n", nums[i]);

    for (int j = 0 ; j <= i ; ++j) {
        for (int k = 1 ; k <= i - j ; ++k)
            nums[j] *= 3;
        
        answer += nums[j];
    }

    return answer;
}