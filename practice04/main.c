#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int solution(int n);

int main(void) {
    srand(time(NULL));

    int num = rand() % 100000000 + 1;
    printf("random number is %d\n", 1);

    int result = 0;
    result = solution(1);

    printf("answer is %d\n", result);

    return 0;
}