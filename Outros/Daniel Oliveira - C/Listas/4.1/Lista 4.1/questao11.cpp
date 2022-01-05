#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<windows.h>
#include<locale.>


		  int main() {

		  setlocale(LC_ALL, "Portuguese");
		  
		  int n, x, cont=1, k, i, fat=1;
float s=0;

printf("informe os valores: ");
scanf("%d %d",&n,&x);

if(n>0 && x>0){
       for(i=2; i<=n; i++){
                fat=1;
                for(k=1; k<=cont; k++){
                         fat=fat*k;
                         }
                if(i%2==0){
                s=s-(pow(x,cont))/fat;
                }else{
                s=s+(pow(x,cont))/fat; 
                }
                cont=cont+2;
                
                }
printf("\no resultado é: %f\n",s);
}



		  system("pause");
		  return(0);
		  }

