#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	float alt, peso=0;
	char sexo;
		printf("Informe sua altura: \n");
		scanf("%f",&alt);
		printf("Informe seu sexo M - Masculino ou F - Feminino\n");
		scanf("%c",&sexo);
		if(sexo=='M' || sexo=='m'){
			peso=(72.7*alt)-58;
		}else if(sexo=='F' || sexo=='f'){
			peso=(62.1*alt)-44.7;
		}else{
			printf("Letra Invalida\n");
		}
	printf("O peso ideal é: %.2f\n",peso);
	system("Pause");
	return 0;
}

