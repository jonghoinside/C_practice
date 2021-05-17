#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

char* solution(const char* number, int k);

int main(void) {
	
	char answer[10];
	char* result = answer;

	const char* number = "1924";
	result = solution(number, 2);
	
	printf("test number is %s, solution number is %s\n", number, result);

	number = "1231234";
	result = solution(number, 3);

	printf("test number is %s, solution number is %s\n", number, result);

	number = "4177252841";
	result = solution(number, 4);
	
	printf("test number is %s, solution number is %s\n", number, result);
	
	number = "1";
	result = solution(number, 1);
	
	printf("test number is %s, solution number is %s\n", number, result);

	return 0;
}

// 테스트 8 : 10000002, 4 했을 때 1002가 나오면 해결
