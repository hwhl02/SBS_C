#include <stdio.h>

int main(void) {
    // 약수
    // 최대공약수
    // 최소공배수

    // 두 정수 입력
    int A, B;
    int big, small;
    int gcd, lcm;  //최대공약수, 최소공배수
    int R;     //나머지

    
    printf("정수 A,B 입력 : ");
    scanf("%d %d", &A, &B);
    // 두 수의 크기 비교
    if(A >= B) {
        big = A;
        small=B;
    } else {
        big = B;
        small = A;
    }
    while(1) {
        // 큰 수를 작은 수로 나눈 나머지를 구한다.
        R = big % small;

        // 현재의 작은 수를 다음 큰 수에 대입
        big = small;

        // 나머지를 다음 작은 수에 대입
        small = R;

        if(R==0) {
            gcd = big;    //최대공약수
            lcm = A*B / gcd; //최소공배수
            break;
        }

    }
    printf("최대공약수 : %d\n",gcd);
    printf("최소공배수 : %d\n", lcm);

    return 0;

}