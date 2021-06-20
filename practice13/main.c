//
// Created by user on 2021-06-07.
//

#include <stdio.h>

int solution(const char* skill, const char* skill_trees[], size_t skill_trees_len);

int main(void) {
    char skill_trees[4][5] = {"BACDE", "CBADF", "AECB", "BDA"};
    printf("%d\n", solution("CBD",skill_trees, 4));

    return 0;
}