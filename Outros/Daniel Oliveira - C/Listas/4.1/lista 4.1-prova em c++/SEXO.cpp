#include<stdio.h>
#include<conio.h.>
#include<ctype.h>

int main(){
    char sexo;
    int CONTM, CONTF, RESP;
    CONTM=0; CONTF=0; RESP=1;
    while(RESP==1){
                   printf("Informe o sexo: \n\nM - Masculino\n\nF - Feminino\n");
                   fflush(stdin);
                   scanf("%c",&sexo);
                   sexo=toupper(sexo);
                   if (sexo=='M'){
                                  CONTM++;
                                  }
                                  else if(sexo=='F'){
                                       CONTF++;
                                       }
                                       else{
                                            printf("\nOPCAO INVALIDA");
                                            }
                                            printf("\nDeseja continuar Digite [1]-SIM ou [2]- NAO\n");
                                            scanf("%d",&RESP);
                                            while(RESP!= 1 && RESP!=2 ){
                                                         printf("OPCAO INVALIDA");
                                                         
                                                         printf("Deseja continuar Digite [1]- SIM ou [2]- NAO\n");
    }                                                     scanf("%d",&RESP);
                                                         }
                                                         printf("\nA quantidade do sexo Masculino: %d",CONTM);
                                                         printf("\nA quantidade do sexo Feminino:  %d",CONTF);
     getch();
     return(0);
    }                                                         
                                  


     
