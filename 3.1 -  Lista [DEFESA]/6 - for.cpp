#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<ctype.h>

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
	printf("  Digite um n�mero de termos positivos para N: ");
	scanf("%d",&n);
	for(c=1; c<n; c++){
		if(c%2==0){
			s-=(float)(c/pow(c, 2));
		}else if(c%2==1){
			s+=(float)(c/pow(c, 2));
		}
	}
	printf("  O valor da s�ria �: %.2f\n",s);
	system("Pause");
	return 0;
}

/**/
