#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"ptb");
    float a;
    int x;
    printf("1-Poupan�a\n2-Fundos de Renda Fixa\n3-Previd�ncia Privada\n\n");
    printf("Escolha o n�mero do tipo de investimento desejado: ");
	scanf("%d", &x);
	printf("Informe o valor do investimento: ");
	scanf("%f", &a);
	switch(x){
		case 1:
			a=a+a*0.03;break;
		case 2:
			a=a+a*0.04;break;
		case 3:
			a=a+a*0.035;break;
		default:
			printf("Tipo Inv�lido");
	}
	printf("Valor ap�s 1 m�s de investimento: %.2f", a);

getch();
return 0;

}

