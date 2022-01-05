#include<stdio.h>
#include<stdlib.h>


int main() {
    int mb,bit,vbps,vel;
    int min,hr;
    printf("\n digite o tamanho de um arquivo em MB: ");
    scanf("%d",&mb);
    bit=((mb*1024)*1024)*8;
    printf("\n digite sua velocidade em bits por segundo: ");
    scanf("%d",&vel);
    vbps=bit/vel;
    min=vbps/60;
    hr=min/60;
    
    printf("\n restam %d horas e  %d minutos para completar o download \n",hr,min);
    system("pause");
    return(0);
}

