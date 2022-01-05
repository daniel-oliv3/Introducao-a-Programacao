#include<stdio.h>
#include<stdlib.h>

int main () 
{    
    float p1,p2,p3,t;
    
    printf("\n Digite as quantidades de picole do tipo 1, tipo 2, tipo3, respectivamente:\n");
    scanf("%f%f%f",&p1,&p2,&p3);
    t=p1*1.10+p2*1.25+p3*0.80;
    printf("\no total arrecadado foi: R$ %.2f\n",t);
    system("pause");
}
