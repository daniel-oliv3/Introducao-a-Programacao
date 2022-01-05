#include<stdio.h>
#include<stdlib.h>

int main() {
    float s,x;
    
    printf("\nDigite o saldo de sua aplicacao: R$");
    scanf("%f",&s);
    x=(s*0,065)+s;
    printf("\nApos um mes o novo saldo sera de: R$%.2f\n\n",x);
    system("pause");
}
