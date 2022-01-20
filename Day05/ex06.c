#include <stdio.h>

int main(void) {
    // 짝수의 합계를 구하시오.
    int sum=0;
    for (int i=1; i<=20; i++) { 

        // 홀수인 경우
        if( i%2 ==1) {
            continue;   // 조건에 맞는 친구 뒤에 continue가 나온다면 위로 다시 점프한다.
                        // 그래서 뒤에 1을 다시 더하지 않는다.
        }
        sum += i;

        printf("%d +",i);
        if(i!=20)
        printf(" + ");
    
    }
    printf(" = %d\n",sum);

    return 0;
}