#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"ptb");
    int a;
    printf("Informe um n�mero para saber seu m�s correspondente: ");
    scanf("%d", &a);
    printf("O m�s �: ");
    switch(a){
    	case 1:
    		printf("JANEIRO");break;
    	case 2:
    		printf("FEVEREIRO");break;
    	case 3:
    		printf("MAR�O");break;
    	case 4:
    	printf("ABRIL");break;
		case 5:
    		printf("MAIO");break;
		case 6:
    		printf("JUNHO");break;
		case 7:
    	printf("JULHO");break;
		case 8:
    		printf("AGOSTO");break;
		case 9:
    	printf("SETEMBRO");break;
    	case 10:
    	printf("OUTUBRO");break;
    	case 11:
    	printf("NOVEMBRO");break;
    	case 12:
    	printf("DEZEMBRO");break;
    	default:
    	printf("Inv�lido");break;
	}
	getch();
	return 0;

}

