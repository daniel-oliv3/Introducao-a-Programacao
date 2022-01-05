#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{

	int cont=0;
	float ch=1.50,ju=1.10;
	
	do
	{
		ch=+0.02;
		ju=+0.03;
		cont++;
	}
	while(ju<ch);
	
	printf("Juca vai ficar maior que chico em %d anos ",cont);

	getch();
	return 0;
}
