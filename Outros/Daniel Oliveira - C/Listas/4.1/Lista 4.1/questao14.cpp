#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<windows.h>
#include<locale.>


		  int main() {

		  setlocale(LC_ALL, "Portuguese");
		  int op, n, k, pot=1, b, E, ant1=0, ant2=1,fat;

do{
printf("MENU DE OPCOES:");
printf("\n[1]calcular fatorial");
printf("\n[2]calcular potencia");
printf("\n[3]calcular Fibonacci");
printf("\n[0]Encerrrar programa");
printf("\n\ninforme a opcao: ");
scanf("%d",&op);

if(op>0 && op<4){
printf("informe um valor: ");
scanf("%d",&n);
         
         switch(op){
        
        case 1: 
             fat=1;
             for(k=1; k<=n;k++){
                      fat=fat*k;
                      }
                      printf("fatorial de N: %d\n\n ",fat);
                      break;
        case 2:
             printf("informe o expoente: ");
             scanf("%d",&E);
             for(k=1; k<=E; k++){
                      pot=pot*n;
                      }
             printf("a potencia %c: %d\n\n",130,pot);
             break;
        case 3:
             for(k=1; k<=n; k++){
                      printf("-%d",ant1+ant2);
                      ant1=ant2;
                      ant2=ant1+ant2;
                      }
             break;
             }
}else if(op!=0)
printf("\n\nopcao invalida!!!\n\n");
else
printf("\nencerrar programa!!!!");
}
while(op!=0);



		  system("pause");
		  return(0);
		  }

