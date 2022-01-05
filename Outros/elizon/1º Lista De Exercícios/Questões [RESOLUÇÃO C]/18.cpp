#include<stdio.h>
#include<stdlib.h>

int main () {
    float j,k;
    printf("\nDigite seu salario base: ");
    scanf("%f",&j);
    k=j*0.02;
    printf("\nseu salario a receber %c: R$ %f \n",130,j-k);
    system("pause");
}
