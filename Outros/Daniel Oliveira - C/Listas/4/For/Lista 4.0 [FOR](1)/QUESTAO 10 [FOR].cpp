#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	
	int i,op=0,idade,cont1=0,cont3=0;
	float mi=0,total=0,cont2=0,perc=0,acum=0;
	
	for(i=1;i<=20;i++){
		
		printf("Digite sua idade\n");
		scanf("%d",&idade);
		printf("Escolha sua opinião\n1-regular\n2-bom\n3-excelente");
		scanf("%d",&op);
		
		total++;
		
		if(op==1){

			printf("Sua opnião foi regular\n");
			cont1++;
		}
		if(op==2){
			printf("Sua opnião foi boa\n");
			cont2++;
			perc=cont2*100/total;
		}
		if(op==3){
			printf("Sua opnião foi excelente\n");
			cont3++;
			acum=acum+idade;
			mi=acum/cont3;
		}
	}

	printf("O total de regulares foi de %d\n",cont1);
	printf("O percentual de bom foi de %.2f\n",perc);
	printf("A média dos excelentes foi de %.2f\n",mi);
						
						getch();
						return(0);	
}
