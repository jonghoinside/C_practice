//
// Created by ajh07 on 2021-06-05.
//
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
    int xVal_[2];
    int yVal_[2];
    struct node * next_;
} Node;

typedef struct {
    Node * ptr_;
    Node * pend_;
} List_line;

void initList(List_line* pList) {
    pList->ptr_ = malloc(sizeof(Node));
    pList->pend_ = pList->ptr_;
    pList->ptr_->next_ = NULL;
}

typedef const int * cint;
int insertLine(List_line* pList, cint pX, cint pY, cint prevX, cint prevY) {
    Node * p1 = pList->ptr_->next_;
    while (p1) {
        if (p1->xVal_[0] == *pX && p1->xVal_[1] == *prevX &&
            p1->yVal_[0] == *pY && p1->yVal_[1] == *prevY)
            return 1;
        else if(p1->xVal_[0] == *prevX && p1->xVal_[1] == *pX &&
                p1->yVal_[0] == *prevY && p1->yVal_[1] == *pY)
            return 1;
        p1 = p1->next_;
    }

    Node* tmp = malloc(sizeof(Node));
    tmp->next_ = NULL;
    pList->pend_->next_ = tmp;
    pList->pend_ = tmp;

    tmp->xVal_[0] = *prevX;
    tmp->yVal_[0] = *prevY;
    tmp->xVal_[1] = *pX;
    tmp->yVal_[1] = *pY;

    return 0;
}


// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* dirs) {
    int x = 0; int y = 0; int prev_x = 0; int prev_y = 0;

    List_line list;
    initList(&list);

    int i = 0;  int answer = 0;
    while(dirs[i]) {
        switch(dirs[i]) {
            case('U'):  ++y; break;
            case('D'):  --y; break;
            case('L'):  --x; break;
            case('R'):  ++x; break;
        }

        if(x == 6) {
            --x; ++i;
        } else if(x == -6) {
            ++x; ++i;
        } else if(y == 6) {
            --y; ++i;
        } else if(y == -6) {
            ++y; ++i;
        } else {
            if (insertLine(&list, &x, &y, &prev_x, &prev_y))
                --answer;
            ++answer;
            ++i;
            prev_x = x;
            prev_y = y;
        }
    }

    return answer;
}



/*

//
// Created by ajh07 on 2021-06-05.
//
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int compare(const int (*p1)[2], const int (*p2)[2]) {
    if (p1[0][0] == p2[0][0] && p1[0][1] == p2[0][1] &&
        p1[1][0] == p2[1][0] && p1[1][1] == p2[1][1])
        return 1;
    else if (p1[0][0] == p2[1][0] && p1[0][1] == p2[1][1] &&
             p1[1][0] == p2[0][0] && p1[1][1] == p2[0][1])
        return 1;
    else
        return 0;
}

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* dirs) {
    int x = 0;  int y = 0;
    int arr[500][2][2] = {0, };

    int i = 0;  int t = 0;
    while(dirs[i]) {
        arr[t][0][0] = x;   arr[t][0][1] = y;
        switch(dirs[i]) {
            case('U'):  ++y;    if(y == 6) {--y; --t;}   break;
            case('D'):  --y;    if(y == -6) {++y; --t;}   break;
            case('L'):  --x;    if(x == -6) {++x; --t;}   break;
            case('R'):  ++x;    if(x == 6) {--x; --t;}   break;
        }
        ++t;    ++i;
    }

    int answer = 0;
    for (int j = 0; j < t; ++j)
        for (int k = j+1; k < t; ++k)
            if (compare(arr[j], arr[k]))
                ++answer;

    return t - answer;
}
 */
