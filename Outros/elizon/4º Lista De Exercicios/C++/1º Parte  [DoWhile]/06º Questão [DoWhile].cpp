#include<stdio.h>
#include<conio.h>

int main()
{
	int ant=1,ac=0,res=0,i=1;
	
	printf("\n Calcular Fibonacci\n");      
     	
	while(i>0 && i<=20)
	{
		res=ant+ac;
		ant=ac;
		ac=res;
		printf("\n A %d da serie de Fibonacci e: %d ",i,res);
		printf("\n");
		i++;
	}
	getch();
	return 0;
}

