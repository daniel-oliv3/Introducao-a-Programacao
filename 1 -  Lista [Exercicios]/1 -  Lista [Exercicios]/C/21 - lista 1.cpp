#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//21. Um trabalhador recebeu seu salário e o depositou em sua conta bancária. Esse trabalhador emitiu dois
//cheques e agora deseja saber seu saldo atual. Sabe-se que cada operação bancária de retirada paga CPMF de
//0,38% e o saldo inicial da conta está zerado:


int main()
{
	setlocale(LC_ALL, "portuguese");
	float salario, cheque1, cheque2, saldofinal, cpmf1, cpmf2;
	
	printf("Informe o Seu Deposito: ");
	scanf("%f",&salario);
	printf("Informe o Valor do Cheque 1: ");
	scanf("%f",&cheque1);
	printf("Informe o Valor do Cheque 2: ");
	scanf("%f",&cheque2);
	cpmf1 = cheque1/100*0.38;
	cpmf2 = cheque2/100*0.38;
	//cpmf1 = cheque1 + (cheque1 * 0.38 / 100);
	//cpmf2 = cheque2 + (cheque2 * 0.38 / 100);
	saldofinal = salario-cheque1-cheque2-cpmf1-cpmf2;
	printf("O Seu Saldo Atual é: %.2f.\n",saldofinal);

	system("pause");
	return 0;	
}
