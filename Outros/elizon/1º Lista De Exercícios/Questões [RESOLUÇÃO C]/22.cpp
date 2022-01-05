#include<stdio.h>
#include<stdlib.h>

int main () {
    
    float a,b;
    
    printf("\nDigite o valor gasto com as despesas no restaurante: ");
    scanf("%f",&a);
    b=a*0.10;
    printf("\nO total %c: %f\n",130,a+b);
    system("pause");
}
