#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 7. Fa�a um programa que leia o n�mero de termos positivo para N. Calcule e mostre o valor da s�rie a seguir:
S = 4 - 4 + 4 - 4 + 4 - 4 + ....
3 5 7 9 11;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int num, c=0;
	float j=1, s=0;
	printf("  Digite um n�mero: ");
	scanf("%d",&num);
	for(c=1; c<=num; c++){
		if(c % 2 == 1){  // par
			s=s+(4.0/j);
		}else{
			if(c % 2 == 0){
				s=s-(4.0/j);
			}
		}
		j+=2;
	}
	printf("  O valor da s�rie �: %.2f\n",s);
	system("Pause");
	return 0;
}

/**/
