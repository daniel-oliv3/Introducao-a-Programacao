#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    float c,j,y,x,f;
    int m;
    printf("\nDigite o capital: ");
    scanf("%f",&c);
    printf("\nDigite a taxa de juros mensal: ");
    scanf("%f",&j);
    printf("\nDigite o periodo em meses: ");
    scanf("%d",&m);
    y=(1+j/100);
    x=pow(y,m);
    f=c*x;
    printf("\nO montante F arrecadado no final do periodo %c: %f\n\n",130,f);
    system("pause");
}
