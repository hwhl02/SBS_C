#include <stdio.h>
#define MAX 100
//�����Ѵ� ��� MAX, �̶��� ; �Ƚᵵ �ȴ�

int main(void) {
    // ���
    // : ���α׷� ���ൿ�� ������ �ʴ� ��
    // Ű���� - const
    int number=3;
    const int NUM=5;

    // ������ ���� ������ �� �ִ�
    number = 10;

    // ����� ���� ������ �� ����
    // NUM=10;  �����߻�

    // ���
    printf("number(����) : %d \n", number);
    printf("NUM(���) : %d \n", NUM);
    printf("MAX(���) : %d \n", MAX);

    return 0;



}