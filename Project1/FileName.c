#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>


int main() {
    //�׸����� �۾� �����층 �˰���
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
    
    //arr ����ð����� ����

    //arr���� ���� ���� �ִ� �۾����� ������

    //ȸ�ǽ��� ���������, H_many++;

    //������� ������ continue;

    //ó�� ���õ� �۾� ����
// arr ������ ���ޱ��� ����

    return 0;
}