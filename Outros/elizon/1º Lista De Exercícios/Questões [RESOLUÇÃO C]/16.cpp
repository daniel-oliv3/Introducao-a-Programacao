#include<stdio.h>
#include<stdlib.h>

int main () {
    float P1,Pcd;
    printf("\ndigite o valor da mercadoria: ");
    scanf("%f",&P1);
    Pcd=P1*0.21;
    printf("\nO novo preco desta mercadoria %c: %f",130,P1-Pcd);
    system("pause");
}
