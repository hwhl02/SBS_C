#include <stdio.h>

//함수 : 일련의 기능을 하는 코드(실행문)의 모음

//함수 정의
//반환타입 함수명 (매개변수1, 매개변수2,...){ 실행문 }
//void : 반환타입이 없음을 의미
void sum(int a, int b){
    int sum=a + b;
    return sum;
    //return(값);
    //1. 함수를 종료
    //2. (값)을 함수를 호호출한 자리로 반환
}
 
// 값에 의한 전달 (call by value)
// 변수가 가진 값을 복사해서 매개변수로 전달
int main(void) {
    int a = 10., b= 20;
    printf("func() 함수 호출 전\n");
    prinf("a")
    // 함수호출 
    // 함수명(전달인자1, 전달인가2);



    prinf("a : %d, b:%d, a,b);
    funs(a,b)

    printf("result : %d\n", result);

    return 0;
}