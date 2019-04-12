/*programing 2*/
#include <stdio.h>

int main(void)
{
    double mile;        //mile을 저장할 변수
    
    double meter;    //정수들의 합을 저장할 변수
    
    printf("마일을 입력하시오:");       //입력 안내 메세지 출력
    scanf("%lf", &mile);                           //하나의 정수를 받아서 mile에 저장
    
    
    meter = 1609.0*mile;
    
    printf("2.0마일은 %lf미터입니다.", meter);
    
    return 0;
    
}
