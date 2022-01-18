#include <stdio.h>

//비교연산자

int main(void) {
    int a = 10;
    int b = 11;
    
    //비교 연산시, 결과가 참이면 1 , 거짓이면 0
    printf("a == b : %d\n", a == b); // a와b가 같으면 1
    printf("a > b : %d\n", a > b);
    printf("a < b : %d\n", a < b);
    printf("a >= b : %d\n", a >= b);
    printf("a <= b : %d\n", a <= b);
    printf("a != b : %d\n", a != b); // a와b가 다르면 1

    return 0;

}