#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int a, int b);

int main(void) {
    int a, b;
    char* day;
	scanf("%d %d", &a, &b);
	
	day = solution(a, b);

    printf("day : %s\n", day);
	
	return 0;
}