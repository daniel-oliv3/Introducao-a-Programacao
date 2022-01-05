#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<windows.h>
#include<locale.>


		  int main() {

		  setlocale(LC_ALL, "Portuguese");

    int idade,cont1,cont2;
    char resp;
    resp='S';
   cont1=0;
   cont2=0;
   while(resp=='S'){
   printf("\nInforme a idade da pessoa\n");
   scanf("%d",&idade);
   if(idade<21){
   cont1++;
 }else if(idade>50){
   cont2++;
}
printf("\nDeseja continuar?\n");
printf("\ninforme [S]para continuar e outra tecla para sair\n");
fflush(stdin);
scanf("%c",&resp);
resp=toupper(resp);
}
printf("\nHá %d pessoas com menos de 21 anos\n",cont1);
printf("\nHá %d pessoas com mais de 50 anos\n",cont2);



		  system("pause");
		  return(0);
		  }

