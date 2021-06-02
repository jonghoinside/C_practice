//
// Created by user on 2021-06-02.
//
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int isPrimeNumber(int num) {
    if (num < 10) {
        switch(num) {
        case(1): case(2): case(3): case(5): case(7):
            return true;
            break;
        default:
            return false;
        }
    } else {
        switch(num%10) {
        case(0):case(2):case(4):case(5):case(6):case(8):
            return false;
        case(1): case(3): case(7): case(9):
            if(num%3 == 0 || num%7 == 0)
                return false;
            if(sqrt(num) == 0.0)
                return false;
        }
    }
    return true;
}

// nums_len은 배열 nums의 길이입니다.
int solution(int nums[], size_t nums_len) {
    int answer = -1;
    int result[nums_len * nums_len];
    for(int i = 0 ; i < nums_len-1 ; ++i) {
        for(int j = i+2 ; j < nums_len ; ++j) {
            
        }
    }

    return answer;
}

