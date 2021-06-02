#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include "solution.h"

int* solution(int lottos[], size_t lottos_len, int win_nums[], size_t win_nums_len);

int main(void){
	int win_lotto[6] = {31, 10, 45, 1, 6, 19};
//	srand(time(NULL));
/*
	for (int i = 0 ; i < 7; ) {
		win_lotto[i] = rand() % 45 + 1;
		
		int j;
		for (j = 0; j < i ; ++j) {
			if (win_lotto[i] == win_lotto[j])
				break;
		}
		
		if (i == j)
			++i;
	}
*/
	printf("win_lotto number is ");
	for (int i = 0 ;  i < 6 ; ++i) printf("%d ", win_lotto[i]);
	printf("\n");
	
	int lotto[6] = {44, 1, 0, 0, 31, 25};
	printf("lotto number is 44, 1, 0, 0, 31, 25\n");
	
	int i_answer[2] = {0, 0};
	
	int* answer = i_answer;
	
	answer = solution(lotto, 6, win_lotto, 6);
	
	printf("answer is\tSuccess : 3, Fail : 5\n");
	
	printf("test is\t\tSuccess : %d, Fail : %d\n", answer[0], answer[1]);
	
	int win_lotto1[6] = {38, 19, 20, 40, 15, 25};
	printf("win_lotto number is ");
	for (int i = 0 ;  i < 6 ; ++i) printf("%d ", win_lotto1[i]);
	printf("\n");
	int lotto1[6] = {0, 0, 0, 0, 0, 0};
	printf("lotto number is 0, 0, 0, 0, 0, 0\n");
	answer = solution(lotto1, 6, win_lotto1, 6);
	printf("answer is\tSuccess : 1, Fail : 6\n");
	printf("test is\t\tSuccess : %d, Fail : %d\n", answer[0], answer[1]);
	
	int win_lotto2[6] = {1, 2, 3, 4, 5, 6};
	printf("win_lotto number is ");
	for (int i = 0 ;  i < 6 ; ++i) printf("%d ", win_lotto2[i]);
	printf("\n");
	int lotto2[6] = {7, 8, 9, 45, 11, 35};
	printf("lotto number is 7, 8, 9, 45, 11, 35\n");
	answer = solution(lotto2, 6, win_lotto2, 6);
	printf("answer is\tSuccess : 1, Fail : 1\n");
	printf("test is\t\tSuccess : %d, Fail : %d\n", answer[0], answer[1]);
	return 0;
}
