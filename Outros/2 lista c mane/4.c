#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"ptb");
    int a;
    printf("Informe o número para saber o mês correspondente: ");
    scanf("%d", &a);
    printf("\nO mês é: ");
    if(a==1)
    	printf("JANEIRO");
    	else
    	if(a==2)
    		printf("FEVEREIRO");
    	else
    	if(a==3)
    		printf("MARÇO");
    	else
    	if(a==4)
    		printf("ABRIL");
    	else
    	if(a==5)
    		printf("MAIO");
    	else
    	if(a==6)
    		printf("JUNHO");
    	else
		if(a==7)
    		printf("JULHO");
    	else
    	if(a==8)
    		printf("AGOSTO");
    	else
		if(a==9)
    		printf("SETEMBRO");
    	else
    	if(a==10)
    		printf("OUTUBRO");
    	else
    	if(a==11)
    		printf("NOVEMBRO");
    	else
    	if(a==12)
    		printf("DEZEMBRO");
    	else
    		printf("Não existe mês com este número");

    	


getch();
return 0;

}

