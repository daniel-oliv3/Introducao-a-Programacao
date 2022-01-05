#include<stdio.h>
#include<stdlib.h>

int main () {
    
    float sal,c1,c2,a,b,total;
    
    printf("\ndigite seu salario: ");
    scanf("%f",&sal);
    printf("\ndigite o valor do primeiro e do segundo cheque respectivamente: ");
    scanf("%f%f",&c1,&c2);
    a=(c1*0.0038)+c1;
    b=(c2*0.0038)+c2;
    total=a+b;
    printf("\no seu saldo atual %c: %f\n",130,sal-total);
    system("pause");
}
