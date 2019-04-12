/*programming 5*/

#include <stdio.h>

int main(void)
{
    double x;            //실수를 저장할 변수
    double y;
    
    printf("실수를 입력하세요:");     //입력 안내 메세지 출력
    scanf("%lf", &x);                 //하나의 정수를 받아서 x에 저장
    
    y = 3x*x + 7x + 11;
    
    printf("다항식의 값은 %lf", y);
    
    return 0;
}
