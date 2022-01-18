#include <stdio.h>

int main(void) {
    int age;
    char name[10]; //배열 변수 
    // 배열의 이름 = 주소값
    //name은 주소 연산자를 입력하지 않아도 가능 / 배열은 &을 입력하지 않아도 가능20
    
    printf("나이와 이름을 입력해보세요\n");
    scanf("%d %s", &age, &name);
    printf("나이 : %d\n",age);
    printf("이름 : %s\n",name);


    return 0;
}