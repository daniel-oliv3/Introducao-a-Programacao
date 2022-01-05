#include<stdio.h>
#include<stdlib.h>
int main () {
    float com,larg,pdc,total;
    
    printf("\ndigite em metros o comprimento e a largura respectivamente: ");
    scanf("%f%f",&com,&larg);
    printf("\ndigite o  preco do metro quadrado do carpete: ");
    scanf("%f",&pdc);
    total=com*larg*pdc;
    printf("\no custo total para forrar o piso da sala %c: %.2f\n",130,total);
    system("pause");
}
