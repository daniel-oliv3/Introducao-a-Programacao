#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	int i,cont=0,cont1=0;
	float acum1=0,acum2=0,n1,n2,n3,n4,n5,media=0,mediag=0;
	
	for(i=1;i<=10;i++)
	{
		printf("\n Informe A Primeira Nota: ");
		scanf("%f",&n1);
		printf("\n Informe A Segunda Nota: ");
		scanf("%f",&n2);
		printf("\n Informe A Terceira Nota: ");
		scanf("%f",&n3);
		printf("\n Informe A Quarta Nota: ");
		scanf("%f",&n4);
		printf("\n Informe A Quinta Nota: ");
		scanf("%f",&n5);
		system("cls");
		
		cont1++;
		media=(n1+n2+n3+n4+n5)/5;
		acum1=acum1+media;
		mediag=acum1/10;
			
		printf("A media do aluno %d sera %.2f ",cont1,media);
		printf("\n");
		
		if(media>=5)
		{
			cont++;
		}
		else
		{
			printf("\n Digitacao invalida...");
		}
	}
	printf("A media total da classe sera: %.2f ",mediag);
	printf("O número de alunos que passaram sera: %d",cont);
						
	getch();
	return(0);
}
