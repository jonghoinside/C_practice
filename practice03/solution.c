#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int a, int b) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    char* answer = (char*)malloc(sizeof(char) * a * b);
    
    int weeknum = (26 * (a + 1) / 10 + b - 1) % 7;
    
    switch(weeknum) {
    case(0):
        answer = "SUM";
        break;
    case(1):
        answer = "MON";
        break;
    case(2):
        answer = "TUE";
        break;
    case(3):
        answer = "WED";
        break;
    case(4):
        answer = "THU";
        break;
    case(5):
        answer = "FRI";
        break;
    case(6):
        answer = "SAT";
        break;
    }
    
    return answer;
}