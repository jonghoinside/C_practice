
//
// Created by user on 2021-06-07.
//
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
// skill_trees_len은 배열 skill_trees의 길이입니다.
int solution(const char* skill, const char* skill_trees[], size_t skill_trees_len) {
    char arr[26] = {0, };

    for (int i = 0; skill_trees[i]; ++i) {
        int count = 0;
        for (int j = 0; skill_trees[i][j]; ++j) {
            for (int k = 0; skill[k]; ++k) {
                if (skill_trees[i][j] == skill[k])
                    arr[count++] = skill_trees[i][j];
            }
        }






    }

    if(skill[0] == arr[0])


    for (int i = 0; i < count; ++i)




    int answer = -1;
    return answer;
}
