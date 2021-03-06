#include <stdio.h>

/*

- &(주소연산자)
: &변수 - 변수의 주소값을 반환하는 연산자

- *(참조연산자)
: *포인터변수(*ptr) - 포인터가 가리키는 주소값을 반환하는 연산자


▶ 포인터
: 주소값을 저장하는 변수

▶ 포인터 변수 선언
자료형 *변수명;

▶ *(참조연산자) 사용
1. 포인터 변수를 선언
2. 포인터 변수의 값에 접근
*/

int main(void) {

    int num=30;
    // 포인터 선언
    int *ptr = &num;

    ptintg("ptr: %d\n",ptr);   // 주소값
    printf("*ptr : %d\n",*ptr); // 포잍너로 접근한 값

    return 0; 
}