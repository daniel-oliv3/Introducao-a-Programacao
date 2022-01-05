#include <conio.h> //Questão 11
#include <stdio.h>
#include<locale.h>
#include<math.h>
int main (){
	setlocale(LC_ALL,"ptb");
    int N,X,CONT,K,I,FAT;
    float S;
    S=0; CONT=1;
    printf("\nInforme dois valores:\n");
	scanf("%d%d",&N,&X);
    if(N>0 && X>0){                                     01592992048873s
           for(I=1;I<=N;I++){
                             FAT=1;
                             for(K=1;K<=CONT;K++){
                 	                                 FAT=FAT*K;
                             }
                             if(I%2==0){
                                        S=S-(pow(X,CONT)/FAT);
                             }else{
                                   S=S+(pow(X,CONT)/FAT);
                             }
                             CONT=CONT+2;
           }printf("\nO Resultado é: %.2f\n",S);
    }                      
getch();
return(0);
}// N=4 X=1 O RESULTADO É 	0.841443
