#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<windows.h>
#include<locale.>


		  int main() {

		  setlocale(LC_ALL, "Portuguese");
		  
		 int i=0,n=1,ma=0,me=0;
		 float soma=0;
		 
		 while(n!=0){
		 	printf("Digite um número:\n");
		 	scanf("%d",&n);
		 	if(n>0){
		 		if(i==0){
		 			ma=n;
		 			me=n;
		 		}
		 		else{
				 } if (n<me){
				 me=n;
				 }else{
				 } if(n>ma){
				ma=n;
			}
				 soma+=n;
				 i++;
}
	

	            printf("\nMenor: %d\n",me);
	            printf("\nMaior: %d\n",ma);
	            printf("A media dos números é: %f\n",soma/i);
	        



		  system("pause");
		  return(0);
		  }

}
