#include<stdio.h>
#include<stdlib.h>

int main () {
    
    float a,e;
    float g1,g2,b,c,d;
    
    printf("\nDigite o peso do saco de racao em kg: ");
    scanf("%f",&a);
    printf("\ndigie em gramas uma quantidade de racao para o gato 1 e posteriormente uma quantidade para o gato 2: ");
    scanf("%f%f",&g1,&g2);
    b=(g1*6)+(g2*6);
    c=a*1000;
    d=c-b;
    printf("\nApos seis dias ainda restou %f kg de racao no saco\n",d/1000);
    system("pause");} 

