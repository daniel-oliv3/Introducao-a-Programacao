#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<windows.h>
#include<locale.>


		  int main() {

		  setlocale(LC_ALL, "Portuguese");
		  
	char sexo,resp;
    int cont,cont1;
    resp='S';
    cont=0;
    cont1=0;
   while(resp=='S'){
    printf("\ninforme [F]para feminino[M]para masculino\n");
    fflush(stdin);
    scanf("%c",&sexo);
    sexo=toupper(sexo);
  if(sexo=='F'){
  printf("\nFeminino\n");
    cont++;
   }else if(sexo=='M'){
     printf("\nMasculino\n");          
    cont1++;
    }else if(sexo!='F' && sexo!='M'){
    printf("\nsexo inválido\n");

}
    printf("\ndeseja continuar?\n");
    printf("\ninforme [S]para continuar outra tecla para sair\n");
    fflush(stdin);
    scanf("%c",&resp);
    resp=toupper(resp);
}

    printf("\na quantidade de pessoas do sexo feminino é:%d\n,",cont);
    printf("\na quantidade de pessoas do sexo masculino é:%d\n,",cont1);



		  system("pause");
		  return(0);
		  }

