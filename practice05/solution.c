#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* number, int k) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
	
	int number_len = strlen(number);	// 전체 숫자의 자릿수
	int answer_len = number_len - k;	// 반환해야하는 숫자의 자릿수
	
//	char* answer = (char*)calloc(sizeof(char),answer_len);
	char* answer = (char*)malloc(sizeof(char)*number_len);
	
	int cmp_start = 0;
	int cmp_end = number_len - answer_len;
	int max = -1;
	int max_index = -1;
	int answer_index = 0;
	
	printf("number_len is %d, answer_len is %d\n", number_len, answer_len);
	
	if (answer_len == 0) {
		answer[0] = '0';
		printf("answer[0] is %c, number is %d\n", answer[0], answer[0]-'0');
		return answer;
	}
	
	while(cmp_start != cmp_end && answer_index != answer_len) {
		max_index = cmp_start;
		
		for (int i = cmp_start ; i <= cmp_end ; ++i) {
			if ( (number[i]-'0') > max ) {
				max = (number[i]-'0');
				max_index = i;
				
				if ( max == 9 )
					break;
			}
			
		}
		
		printf("cmp_start is %d, cmp_end is %d, max is %d, max_index is %d\n", cmp_start, cmp_end, max, max_index);
		
		answer[answer_index++] = number[max_index];
		
		cmp_start = max_index + 1;
		++cmp_end;
		max = 0;
	}
	
	while(answer_len != answer_index) {
		answer[answer_index++] = number[cmp_start++];
	}
	
	for(int i = 0 ; i < number_len ; ++i) {	
		printf("number[%d] is %c, number is %d\n", i, number[i], number[i]-'0');
	}
	
	for(int i = 0 ; i < answer_index ; ++i) {	
		printf("answer[%d] is %c, number is %d\n", i, answer[i], answer[i]-'0');
	}
	
    return answer;
}
