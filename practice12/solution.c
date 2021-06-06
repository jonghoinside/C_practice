//
// Created by ajh07 on 2021-06-06.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    int Q_num;
    int A_num;
} Pair;

int compare(const Pair * a, const Pair * b){
    if(a->A_num > b->A_num)
        return 0;
    else if(a->A_num < b->A_num)
        return 1;
    else if(a->A_num == b->A_num) {
        char i[10];      char j[10];        char tmp[10];
        sprintf(i, "%d", a->Q_num);
        sprintf(j, "%d", b->Q_num);
        sprintf(tmp, "%d", a->Q_num);
        strcat(i, j);   strcat(j, tmp);

        if (atoi(i) > atoi(j))
            return 0;
        else
            return 1;
    }
}

// numbers_len은 배열 numbers의 길이입니다.
char* solution(int numbers[], size_t numbers_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    Pair nums[numbers_len];
    for(int i = 0; i < numbers_len; ++i) {
        int digit = numbers[i];
        while(digit >= 10)
            digit /= 10;
        nums[i].Q_num = numbers[i];
        nums[i].A_num = digit;
    }

    qsort(nums, numbers_len, sizeof(Pair), compare);

    char * answer = (char *)calloc(numbers_len * 4, sizeof(char));
    char ans[20];
    for(int i = 0; i < numbers_len; ++i) {
        sprintf(ans, "%d", nums[i].Q_num);
        strcat(answer, ans);
    }

    if(atoi(answer) == 0)
        return "0";
    return answer;
}