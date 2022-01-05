#include<stdio.h>
#include<stdlib.h>

int main () {
    
    int a,b,c,d;
    
    printf("\ndigite quatro valores a serem somados e multiplicados entre si: ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    printf("\na soma de a com b %c: %d ",130,a+b);
    printf("\na multiplicacao de a com b %c: %d",130,a*b);
    printf("\na soma de a com c %c: %d",130,a+c);
    printf("\na multiplicacao de a com c %c: %d",130,a*c);
    printf("\na soma de a com d %c: %d ",130,a+d);
    printf("\na multiplicacao de a com d %c: %d",130,a*d);
    printf("\na soma de b com c %c: %d ",130,b+c);
    printf("\na multiplicacao de b com c %c: %d",130,b*c);
    printf("\na soma de b com d %c: %d ",130,b+d);
    printf("\na multiplicacao de b com d %c: %d",130,b*d);
    printf("\na soma de c com d %c: %d ",130,c+d);
    printf("\na multiplicacao de c com d %c: %d",130,c*d);
    system("pause");
}
