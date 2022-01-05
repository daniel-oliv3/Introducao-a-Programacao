#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	int i,cont=0,cont1=0;
	float acum1=0,acum2=0,n1,n2,n3,n4,n5,media=0,mediag=0;
	
	for(i=1;i<=10;i++){
		printf("Digite a primeira nota\n");
		scanf("%f",&n1);
		printf("Digite a segunda nota\n");
		scanf("%f",&n2);
		printf("Digite a terceira nota\n");
		scanf("%f",&n3);
		printf("Digite a quarta nota\n");
		scanf("%f",&n4);
		printf("Digite a quinta nota\n");
		scanf("%f",&n5);
		system("cls");
		cont1++;
		media=(n1+n2+n3+n4+n5)/5;
		acum1=acum1+media;
		mediag=acum1/10;
		printf("A média do aluno %d é %.2f\n",cont1,media);
		
		if(media>=5)
		{
			cont++;
		}
	
	}
	printf("A media total da classe é de %.2f\n",mediag);
	printf("O número de alunos que passaram é de %d",cont);
						
						getch();
						return(0);
}
