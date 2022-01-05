#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	int i,idade,cont1=0,cont2=0,cont3=0,cont4=0;
	float acum1=0,acum2=0,acum3=0,acum4=0,peso,m1=0,m2=0,m3=0,m4=0;
	
	for(i=1;i<=20;i++)
	{
		printf("\n Informe sua idade:  ");
		scanf("%d",&idade);
		printf("\n Informe O seu peso:  ");
		scanf("%f",&peso);

		if(idade>=1 and idade<=10 and idade>0)
		{
			cont1++;
			acum1=acum1+peso;
			m1=acum1/cont1;
		}
		if(idade>=11 and idade<=20 and idade>0)
		{
			cont2++;
			acum2=acum2+peso; 
			m2=acum2/cont2;
		}
		if(idade>=21 and idade<=30 and idade>0)
		{
			cont3++;
			acum3=acum3+peso; 
			m3=acum3/cont3;
		}
		if(idade>30 and idade>0)
		{
			cont4++;
			acum4=acum4+peso; 
			m4=acum4/cont4;
		}
		else
		{
			printf("\n Digitacao Invalida...");
		}
	}
	printf("A media da 1 faixa etária é de %.2f",m1);
	printf("\n");
	printf("A media da 2 faixa etária é de %.2f",m2);
	printf("\n");
	printf("A media da 3 faixa etária é de %.2f",m3);
	printf("\n");
	printf("A media da 4 faixa etária é de %.2f",m4);
	printf("\n");
		
	getch();
	return(0);
}
