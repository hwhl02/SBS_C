#include <stdio.h>

int main(void) {

    int a = 10;
    int b = 20;
    int c;

// 전위연산자
// 변수 앞에 작성하는 증감연산자
// 대부분의 연산자보다 연산 우선순위가 앞선다
    c = ++a + b ; 
    printf("c = %d\n",c); // c= 31 //++를 먼저
// 1.++ 2.+ 3.=
    int x=10;
    int y=20;
    int z;

// 후위연산자
// 변주 뒤에 작성하는 중간연산자
// 가장 마지막에 후위연산자를 계산한다
    z= x++ + y;
    printf("z= %d\n", z); // z= 30 //++를 가장 나중에
//1.+ 2.= 3.++
    return 0;
}