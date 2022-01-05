#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"ptb");
    int a;
    printf("Informe a idade do nadador: ");
    scanf("%d", &a);
    if(a>=5 && a<=7)
    printf("\nCategoria: Infantil A.");
    else
    if(a>=8 && a<=10)
    printf("\nCategoria: Infantil B.");
    else
    if(a>=11 && a<=13)
    printf("\nCategoria: Juvenil A.");
    else
    if(a>=14 && a<=17)
    printf("\nCategoria: Juvenil B.");
    else
    if(a>=18)
    printf("\nCategoria: Sênior.");
    else
    printf("\nCategoria: Inexistente.");

getch();
return 0;
}

