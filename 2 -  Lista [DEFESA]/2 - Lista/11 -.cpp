#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 11 - Uma concession�ria est� parcelando carros em 60x sem juros desde que voc� pague, no m�nimo, 50% do
//valor do ve�culo de entrada e parcele o restante em 60 vezes iguais sem juros. Fa�a um algoritmo no qual o
//usu�rio informa o valor do carro e o valor que deseja dar de entrada. O programa deve verificar se o valor
//da entrada � suficiente para cobrir os 50% do valor do carro e imprimir o valor da parcela a ser paga em
//60x:

int main()
{
	setlocale(LC_ALL, "portuguese");
	float vc, ve, vp, vr;
	printf("Informe o valor do veiculo: \n");
	scanf("%f",&vc);
	printf("Informe o valor que deseja dar de entrada: \n");
	scanf("%f",&ve);
	vr = vc-ve;
	vp = vc*0.50;
	if(ve >= vp){
		printf("O valor da parcela sera 60x R$ %.2f\n",vr/60);
	}else{
		printf("O valor da entrada para o parcelamento n�o foi o suficiente: \n");
	}
	system("Pause");
	return 0;
}

