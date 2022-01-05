#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//36. Faça um algoritmo que calcule e mostre a tabuada (de 1 a 10) de dividir de um número fornecido pelo
//usuário:



int main()
{
	setlocale(LC_ALL, "portuguese");
	float num;
	printf("Informe um número (de 1 á 10): \n");
	scanf("%f",&num);
	printf(" %.f / %.f = %.f \n",num*1,num,(num*1/num));
	printf(" %.f / %.f = %.f \n",num*2,num,(num*2/num));
	printf(" %.f / %.f = %.f \n",num*3,num,(num*3/num));
	printf(" %.f / %.f = %.f \n",num*4,num,(num*4/num));
	printf(" %.f / %.f = %.f \n",num*5,num,(num*5/num));
	printf(" %.f / %.f = %.f \n",num*6,num,(num*6/num));
	printf(" %.f / %.f = %.f \n",num*7,num,(num*7/num));
	printf(" %.f / %.f = %.f \n",num*8,num,(num*8/num));
	printf(" %.f / %.f = %.f \n",num*9,num,(num*9/num));
	printf(" %.f / %.f = %.f \n",num*10,num,(num*10/num));
	system("pause");
	return 0;
}
