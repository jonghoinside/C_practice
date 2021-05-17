#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int numbers[], size_t numbers_len);

int main(void) {
//	printf("input number : ");
//	scanf("%d %d %d %d %d", 

	int nums1[] = {0, 0, 100, 100};
	
	int* pums = solution(nums1, 4);

	 for (int i = 0 ; i < 3 ; ++i) {
        printf("nums1 answer[%d] : %d\n", i, pums[i]);
    }
	
	int nums2[] = {0, 100, 1000, 10};

	pums = solution(nums2, 4);

	 for (int i = 0 ; i < 6 ; ++i) {
        printf("nums2 answer[%d] : %d\n", i, pums[i]);
    }
	
	return 0;
}
