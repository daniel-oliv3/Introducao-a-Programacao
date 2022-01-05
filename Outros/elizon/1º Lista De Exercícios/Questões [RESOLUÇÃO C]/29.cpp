#include<stdio.h>
#include<stdlib.h>

int main () {
    
    float n1,n2;
    
    printf("\nDigite a altura do degrau da escada: ");
    scanf("%f",&n1);
    printf("\n a altura que a pessoa deseja alcancar subindo a escada: ");
    scanf("%f",&n2);
    printf("\npara alcancar essa altura voce devera subir %f degraus\n",n2/n1);
    system("pause");
}
