/* Faça um algoritmo que receba o código correspondente ao cargo de um funcionário e seu salário atual e
mostre o cargo, o valor do aumento e seu novo salário. Os cargos estão na tabela a seguir. */

#include <stdio.h>
#include <conio.h>
int main(){
	int cargo;
	float sal,aumento=0,nsal=0;
	printf("Digite o codigo do cargo:\n1 - Escrituario\n2 - Secretario\n3 - Caixa\n4 - Gerente\n5 - Diretor\n>> ");
	scanf("%d", &cargo);
	printf("Salario: ");
	scanf("%f", &sal);
	if (cargo == 1){
		aumento = sal * 0.50;
		nsal = sal + aumento;
		printf("Cargo: Escrituario");
		printf("\nSalario atual: %.2f",sal);
	} else
		if (cargo == 2){
			aumento = sal * 0.35;
			nsal += aumento;
			printf("Cargo: Secretario");
			printf("\nSalario atual: %.2f",sal);
		} else
			if (cargo == 3){
				aumento = sal * 0.30;
				nsal += aumento;
				printf("Cargo: Caixa");
				printf("\nSalario atual: %.2f",sal);
				
			} else
				if (cargo == 4){
					aumento = sal * 0.10;
					nsal += aumento;
					printf("Cargo: Gerente");
					printf("\nSalario atual: %.2f",sal);
				} else
					if (cargo == 5){
						aumento = 0;
						nsal += aumento;
						printf("Cargo: Diretor");
						printf("\nSalario atual: %.2f",sal);
					} else
						printf("Codigo invalido");
	
	printf("\nAumento: %.2f",aumento);
	printf("\nNovo salario: %.2f",nsal);
	getch();	
	return 0;
}

