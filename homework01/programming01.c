/*programing 1*/
#include <stdio.h>

int main(void)
{
    int x;        //첫번째 정수를 저장할 변수
    int y;        //두번째 정수를 저장할 변수
    int z;        //세번째 정수를 저장할 변수
    
    printf("첫번째 숫자를 입력하시오:");       //입력 안내 메세지 출력
    scanf("%f", &x);                           //하나의 정수를 받아서 x에 저장
    
    printf("두번째 숫자를 입력하시오:");       //입력 안내 메세지 출력
    scanf("%f", &y);                           //하나의 정수를 받아서 y에 저장
    
    printf("세번째 숫자를 입력하시오:");       //입력 안내 메세지 출력
    scanf("%f", &z);                           //하나의 정수를 받아서 z에 저장
    
    sum = x + y + z;
}
