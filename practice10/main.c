//
// Created by ajh07 on 2021-06-05.
//
#include <stdio.h>

int solution(int *A, size_t A_len, int *B, size_t B_len);

int main(void) {
    int nums1[3] = {1, 4, 2};
    int nums2[3] = {5, 4, 4};

    printf("test answer is %d\n", solution(nums1, 3, nums2, 3));

    return 0;
}