#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>


int main() {
    //그리디의 작업 스케쥴링 알고리즘
    int N = 0;
    int H_many = 0;
    scanf("%d", &N);

    int** arr = (int**)malloc(sizeof(int*) * N);

    for (int i = 0; i < N; i++) {
        arr[i] = (int*)malloc(sizeof(int) * 2);
    }

    for (int i = 0; i < N; i++) {
            scanf("%d %d", arr+i, (arr+i)+1);
    }
    
    //arr 종료시간으로 정렬

    //arr에서 가장 위에 있는 작업부터 가져옴

    //회의실이 비어있으면, H_many++;

    //비어있지 않으면 continue;

    //처음 선택된 작업 삭제
// arr 마지막 도달까지 진행

    return 0;
}