#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int numbers[], size_t numbers_len) {
 // return 값은 malloc 등 동적 할당을 사용해주세요. 
 // 할당 길이는 상황에 맞게 변경해주세요.
      
    int* answer = (int*)malloc(sizeof(int) * numbers_len * numbers_len);
    
    if (answer == NULL) exit(1);

    int count = 0;
    for (int i = 0 ; i < numbers_len ; ++i) {
        for (int j = i + 1 ; j < numbers_len ; ++j) {
            answer[count] = numbers[i] + numbers[j];
            
            for (int k = 0 ; k < count ; ++k) {
                if (answer[k] == answer[count]) {
                    --count;
                    break;
                }
            }
            ++count;
        }
    }

    for (int i = 0 ; i < count ; ++i) {
        for (int j = i + 1 ; j < count ; ++j) {
            if (answer[i] > answer[j]) {
                int tmp = answer[i];
                answer[i] = answer[j];
                answer[j] = tmp;
            }
        }
    }

    printf("count : %d\n", count);

    return answer;
}