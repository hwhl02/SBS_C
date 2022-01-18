#include <stdio.h>
#define MAX 100
//정의한다 상수 MAX, 이때는 ; 안써도 된다

int main(void) {
    // 상수
    // : 프로그램 실행동안 변하지 않는 값
    // 키워드 - const
    int number=3;
    const int NUM=5;

    // 변수는 값을 변경할 수 있다
    number = 10;

    // 상수는 값을 변경할 수 없다
    // NUM=10;  에러발생

    // 출력
    printf("number(변수) : %d \n", number);
    printf("NUM(상수) : %d \n", NUM);
    printf("MAX(상수) : %d \n", MAX);

    return 0;



}