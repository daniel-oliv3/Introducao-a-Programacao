#include<stdio.h>
#include<stdlib.h>

int  main () {
    
    float a,b,c,d;
    
    printf("\nDigite o tempo gasto na viagem em horas: ");
    scanf("%f",&a);
    printf("\nDigite sua velocidade media na viagem em km/h: ");
    scanf("%f",&b);
    c=a*b;
    d=c/12;
    printf("\na sua velocidade media foi de %f km/h, gastou %f horas na viagem e percorreu uma distancia de %f km gastando %f litros de combustivel",b,a,c,d);
    system("pause");
}
