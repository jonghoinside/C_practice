#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// lottos_len은 배열 lottos의 길이입니다.
// win_nums_len은 배열 win_nums의 길이입니다.
int* solution(int lottos[], size_t lottos_len, int win_nums[], size_t win_nums_len) {
	// return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
	int* answer = (int*)malloc(2);
	
	int winCount = 0;
	int zeroCount = 0;
	
	for (int i = 0 ; win_nums[i] ; ++i) {
		for (int j = 0 ; win_nums[j] ; ++j) {
			if ( lottos[i] == win_nums[j] )
				++winCount;
		}
		
		if ( lottos[i] == 0 )
			++zeroCount;
	}
	
	printf("winCount is %d, zeroCount is %d\n" , winCount, zeroCount);
	
	switch(zeroCount) {
		case 0:
			answer[0] = 1;
			if (winCount == 0) answer[1] = 6, answer[0] = 6;
			else answer[1] = 7 - winCount;
			break;
		default :
			answer[0] = 7 - (winCount + zeroCount);
			if (winCount == 0) answer[1] = 6;
			else answer[1] = 7 - winCount;
	}
	
	return answer;
}
