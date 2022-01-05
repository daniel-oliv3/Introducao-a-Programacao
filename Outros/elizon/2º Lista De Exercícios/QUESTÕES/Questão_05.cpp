#include<stdio.h>
#include<conio.h>
#include<math.h>

main()
{
	float r,rr;
	int n1,n2;
	
	printf("\n Informe Um Numero...: ");
	scanf("%d",&n1);
	printf("\n Informe Um Outro Numero...: ");
	scanf("%d",&n2);	
	if (n1<n2)
	{
		r= pow(n1,2);
		rr=sqrt(n2);
	}
	if (n1==n2)
	{
		printf("\n Sao Iguais ");
	}
	else
	{
		r= pow (n2,2);
		rr=sqrt(n1);
	}
	printf("\n");
	printf("\n O menor Seria Sua Raiz Quadrada Seria : %.2f",rr);
	printf("\n O Maior Seria Seu Quadrado Seria : %.2f",r);
}
