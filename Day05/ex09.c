#include <stdio.h>

int main(void) {
    // ���
    // �ִ�����
    // �ּҰ����

    // �� ���� �Է�
    int A, B;
    int big, small;
    int gcd, lcm;  //�ִ�����, �ּҰ����
    int R;     //������

    
    printf("���� A,B �Է� : ");
    scanf("%d %d", &A, &B);
    // �� ���� ũ�� ��
    if(A >= B) {
        big = A;
        small=B;
    } else {
        big = B;
        small = A;
    }
    while(1) {
        // ū ���� ���� ���� ���� �������� ���Ѵ�.
        R = big % small;

        // ������ ���� ���� ���� ū ���� ����
        big = small;

        // �������� ���� ���� ���� ����
        small = R;

        if(R==0) {
            gcd = big;    //�ִ�����
            lcm = A*B / gcd; //�ּҰ����
            break;
        }

    }
    printf("�ִ����� : %d\n",gcd);
    printf("�ּҰ���� : %d\n", lcm);

    return 0;

}