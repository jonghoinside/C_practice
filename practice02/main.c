#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int absolutes[], size_t absolutes_len, bool signs[], size_t signs_len);

int main(void) {

	int absolutes[] = {1, 2, 3};
    bool signs[] = {false, false, true};
	
	int value = solution(absolutes, 3, signs, 3);

    printf("value : %d\n", value);
	
	return 0;
}
