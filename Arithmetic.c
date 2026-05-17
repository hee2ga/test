#include<stdio.h>

int main(){
    
    int value1 = 20, value2 = 3;
    printf("<다항 연산자>\n");
    printf("+ : %d\n", value1 + value2); // 덧셈
    printf("- : %d\n", value1 - value2); // 뺄셈
    printf("* : %d\n", value1 * value2); // 곱셈
    printf("/ : %d\n", value1 / value2); // 나눗셈 (몫)
    printf("%% : %d\n", value1 % value2); // 나머지

    printf("<단항 연산자>\n");
    printf("++value1 : %d\n", ++value1); // 전위 증가 연산자, value1을 먼저 증가시키고 그 값을 반환
    printf("value1++ : %d\n", value1++); // 후위 증가
    printf("value1 : %d\n", value1); // value1의 현재 값 출력
    return 0;
}