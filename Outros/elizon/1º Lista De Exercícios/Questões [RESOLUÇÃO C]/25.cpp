#include<stdio.h>
#include<stdlib.h>

int main () {
    
     int nprest,prestp;
     float vprest,qtdp,saldev;
     
    printf("\nDigite o numero de prestacoes, quantidades de prestacoes pagas e o valor das prestacoes: ");
    scanf("%d%d%f",&nprest,&prestp,&vprest);
    qtdp=prestp*vprest;
    saldev=vprest*(nprest-prestp);
    printf("\nTotal pago: %f",qtdp);
    printf("\nSaldo devedor: %f\n",saldev);
    system("pause");
}
