#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//23. Criar um algoritmo que informe qual quantidade de dinheiro gasta por uma pessoa ao fazer três viagens
//percorrendo cada continente (América, Europa e África), a pessoa deverá informar um país de cada
//continente que deseja visitar, no final informe quanto essa pessoa gastou

int main()
{
	setlocale(LC_ALL, "portuguese");
	int c1, c2, c3; 
	float v1, v2, v3, r;
	printf("Informe um país da [AMÉRICA]: \n");
	printf("[1] - Canadá [R$ 1.970,00]\n");
	printf("[2] - El Salvador [R$ 1.840,00]\n");
	printf("[3] - Brasil [R$ 1.360,00]\n");
	printf("[4] - México [R$ 1.480,00]\n");
	scanf("%d",&c1);
	if(c1 == 1){
		v1 = 197000;
	}else{
		if(c1 == 2){
			v1 = 184000;
		}else{
			if(c1 == 3){
				v1 = 136000;
			}else{
				if(c1 == 4){
					v1 = 148000;
				}else
					printf("Número Invalido!\n");
			}
		}
	}
	printf("Informe um país da [EUROPA]: \n");
	printf("[1] - Itália [R$ 2.130,00]\n");
	printf("[2] - Portugal [R$ 1.950,00]\n");
	printf("[3] - França [R$ 2.320,00]\n");
	printf("[4] - Vaticano [R$ 2.470,00]\n");
	scanf("%d",&c2);
	if(c2 == 1){
		v2 = 213000;
	}else{
		if(c2 == 2){
			v2 = 196500;
		}else{
			if(c2 == 3){
				v2 = 232000;
			}else{
				if(c2 == 4){
					v2 = 247000;
				}else
					printf("Número Invalido!\n");
			}
		}
	}
	printf("Informe um país da [ÁFRICA]: \n");
	printf("[1] - África do Sul [R$ 1.780,00]\n");
	printf("[2] - Camarões [R$ 2.045,00]\n");
	printf("[3] - Marrocos [R$ 1.980,00]\n");
	printf("[4] - Tanzânia [R$ 2.090,00]\n");
	scanf("%d",&c3);      
	if(c3 == 1){
		v3 = 178000;
	}else{
		if(c3 == 2){
			v3 = 204500;
		}else{
			if(c3 == 3){
				v3 = 198000;
			}else{
				if(c3 == 4){
					v3 = 209000;
				}else
					printf("Número Invalido!\n");
			}
		}
	}
	r = v1+v2+v3;
	printf("O total gasto com as três viagens é: %.2f\n",r);
	system("Pause");
	return 0;
}

