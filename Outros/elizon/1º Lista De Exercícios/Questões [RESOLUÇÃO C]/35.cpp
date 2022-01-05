#include<stdio.h>
#include<stdlib.h>

int main () {
    
    float a,b,c,d,e,f;
    
    printf("\no valor do salario minimo: ");
    scanf("%f",&a);
    printf("\nA quantidade de quilowatt: ");
    scanf("%f",&b);
    
    c=a/6;
    d=c*b;
    e=d*15/100;
    f=d-e;
    
    printf("\n o valor de cada quilowatt: %f",c);
    printf("\n o valor a ser pago por essa residencia: %f",d);
    printf("\n o valor a ser pago com desconto: %f\n",f);
    
    system("pause");
}
