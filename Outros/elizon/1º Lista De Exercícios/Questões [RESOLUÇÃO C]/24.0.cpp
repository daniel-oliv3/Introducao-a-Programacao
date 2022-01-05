#include<stdio.h>
#include<stdlib.h>

int main() {
    
    int a,b,d,e;
    float c,f,g;
    
    printf("\ndigite a quantos anos voce fuma: ");
    scanf("%d",&a);
    printf("\ndigite quantos cigarros voce fuma por dia: ");
    scanf("%d",&b);
    printf("\ndigite o preco de uma carteira de cigarro:R$ ");
    scanf("%f",&c);
    
    d=a*365;
    e=d*b;
    f=e/20;
    g=f*c;
    
    printf("\nvoce ja gastou R$%.2f reais com cigarro!\n\n\n\n",g);
    system("pause");
    return(0);
}
