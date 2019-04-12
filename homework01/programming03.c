/*programing 3*/
#include <stdio.h>

int main(void)
{
    double base;        //base을 저장할 변수
    
    double height;    //height를 저장할 변수
    
    double area;      //area를 저장할 변수
    
    printf("삼각형의 밑변:");       //입력 안내 메세지 출력
    scanf("%lf", &base);            //하나의 정수를 받아서 base에 저장
    
    printf("삼각형의 높이:");       //입력 안내 메세지 출력
    scanf("%lf", &height);          //하나의 정수를 받아서 height에 저장
    
    area = 0.5*height*base;
    
    
    
    printf("삼각형의 넓이:%lf", area);
    
    return 0;
    
}
