#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>


/* 6. Fa�a um programa que leia o n�mero de termos positivo para N. Calcule e mostre o valor da s�rie a seguir:
S = 1 - 2 + 3 - 4 + 5 - 6 + ....
1 4 9 16 25 36
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int n, c=0;
	float s=1;
	printf("  Digite um n�mero: ");
	scanf("%d",&n);
	for(c=1; c<n; c++){  // para(c recebe 1; c menor que n; c mais mais)fa�a;
		if(c % 2 == 0){  // se(c mod 2 igual igual a 0)fa�a;
			s-=(float)(c/pow(c, 2));  // s menor igual (float)(c dividido por pow(c, 2));
		}else{  // caso contrario
			if(c % 2 == 1){  //  se(c mod 2 igual igual 1)fa�a;
				s+=(float)(c/pow(c, 2));  //  s mais igual (float)(c dividido por pow(c, 2);
			}  
		}
	}
	printf("  O valor da s�rie �: %.2f\n",s); // impress�o do resultado;
	system("Pause");
	return 0;
}

/**/
