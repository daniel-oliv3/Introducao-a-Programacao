#include <stdio.h>
#include <conio.h>

int main() {

    int a;
    float b=0;

    printf("Informe um pais da America que você deseja visitar\n");
    printf("1 - Canada\n");
    printf("2 - El Salvador\n");
    printf("3 - Brasil\n");
    printf("4 - Mexico\n");
    printf("Sua escolha: ");
    scanf("%d", &a);

    switch(a) {
        case(1):
            b+=1970; break;
        case(2):
            b+=1840; break;
        case(3):
            b+=1360; break;
        case(4):
            b+=1480; break;
        default:
            printf("\nOpcao Invalida\n");

    }

    printf("\nInforme um pais da Europa que você deseja visitar\n");
    printf("1 - Italia\n");
    printf("2 - Portugal\n");
    printf("3 - Franca\n");
    printf("4 - Vaticano\n");
    printf("Sua escolha: ");
    scanf("%d", &a);

    switch(a) {
        case(1):
            b+=2130; break;
        case(2):
            b+=1965; break;
        case(3):
            b+=2320; break;
        case(4):
            b+=2470; break;
        default:
            printf("\nOpcao Invalida\n");

    }

    printf("\nInforme um pais da Africa que você deseja visitar\n");
    printf("1 - Africa do Sul\n");
    printf("2 - Camaroes\n");
    printf("3 - Marrocos\n");
    printf("4 - Tanzania\n");
    printf("Sua escolha: ");
    scanf("%d", &a);

    switch(a) {
        case(1):
            b+=1780;
            break;
        case(2):
            b+=2045;
            break;
        case(3):
            b+=1980;
            break;
        case(4):
            b+=2090;
            break;
        default:
            printf("\nOpcao Invalida\n");

    }

    printf("\nVoce gastara R$ %.2f no total com as viagens\n", b);
	getch();
	return 0;}
