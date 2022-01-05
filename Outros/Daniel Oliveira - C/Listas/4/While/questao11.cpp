#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<windows.h>
#include<locale.>


		  int main() {

		  setlocale(LC_ALL, "Portuguese");
		  
		  int v1=0,v2=0,v3=0,v4=0,vn=0,vb=0,v=0;
		  float tt=0;
		  
		  printf("1- Candidato 1\n 2- Candidato 2\n 3- Candidato 3\n 4- Candidato 4\n 5- Voto Nulo 5\n 6- Voto em branco 6\n 7- Sair");
		  scanf("%d",&v);
		  while(v!=7){
		  	switch(v){
		  		case 1:
		  		v1++;
		  		break;
		  		case 2:
		  		v2++;
		  		break;
		  		case 3:
		  		v3++;
		  		break;
		  		case 4:
		  		v4++;
		  		break;
		  		case 5:
		  		vn++;
		  		break;
		  		case 6:
		  		vb++;
		  		break;
		  		
		  	default:
		  		printf("\nInválido!\n");
		  	}
		  	system("cls");
		  	printf("1- Candidato 1\n 2- Candidato 2\n 3- Candidato 3\n 4- Candidato 4\n 5- Voto Nulo 5\n 6- Voto em branco 6\n 7- Sair");
		    scanf("%d",&v);
	  }
	       printf("candidato 1: %d\ncandidato 2: %d\ncandidato 3: %d\ncandidato 4: %d\nvotos nulos: %d\nvotos em brancos: %d\n%.1f%% de votos nulos\n%.1f%% de votos em branco.", v1, v2, v3, v4, vn, vb, 100*vn/tt, 100*vb/tt);
		  



		  system("pause");
		  return(0);
	}

