#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// vetor exemplo 2

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i;
	float v[6], maior; // lendo os valores informados pelo usuário;
	for(i=0; i<6; i++){
		printf("  Digite o %dº valor: ",i+1);
		scanf("%f",&v[i]);
	}
	maior=v[0]; // inicializando a variavel comparando quem e o maior
	for(i=0; i<6; i++){
		if(v[i] > maior){
			maior=v[i];
		}
	}
	printf("\n");
	for(i=0; i<6; i++){
		printf("%.2f\n",v[i]);
	}
	printf("\n O maior valor: %.2f\n",maior);
	system("Pause");
	return 0;
}

